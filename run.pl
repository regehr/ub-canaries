#!/usr/bin/perl -w

use strict;
use IPC::Cmd;
use File::Temp;
use File::Compare;
use Getopt::Long;

sub print_file($) {
    (my $fn) = @_;
    open INF, "<$fn";
    while (my $line = <INF>) {
        print $line;
    }
    close INF;
}

my $verbose = 0;
die("Error in command line arguments")
    unless GetOptions("verbose=i" => \$verbose) && ! scalar(@ARGV);

# TODO let people specify these w/o modifying this script
my @compilers = ("gcc", "gcc-4.4", "clang");
my @opts = ("-O0", "-O1", "-O2", "-Os", "-O3");

# TODO support C++

foreach my $compiler (@compilers) {
    if (!IPC::Cmd::can_run($compiler)) {
        print "can't run '$compiler', so skipping it\n";
        next;
    }
    foreach my $opt (@opts) {
        opendir my $dh, "." or die "$0: opendir: $!";
        my @dirs = grep {-d "./$_" && ! /^\./} readdir($dh);
        foreach my $dir (@dirs) {
            my @files = glob "$dir/*.c";
            print "no files found in '$dir'\n"
                unless (scalar(@files)>0);
            my $any_unexpected = 0;
            foreach my $file (sort @files) {
                print "\ntesting $compiler $opt using $file\n"
                    if ($verbose > 0);
                die unless ($file =~ /(.*)\.c$/);
                my $root = $1;
                my $exe = tmpnam();
                system "$compiler -w $opt $file -o $exe";
                my $output = tmpnam();
                system "$exe > $output";
                unlink $exe;
                my @expected_outputs = glob "$root.output*";
                die "oops: no expected outputs for '$file'\n"
                    unless (scalar(@expected_outputs)>0);
                my $match = 0;
                foreach my $fn (@expected_outputs) {
                    $match |= (0 == File::Compare::compare($output, $fn));
                }
                if ($verbose > 0 && ! $match) {
                    print "output from $compiler $opt on $file was unexpected:\n";
                    print_file($output);
                }
                $any_unexpected |= ! $match;
                unlink $output;
            }
            my $compiler_id = "$compiler $opt";
            print "$compiler_id $dir $any_unexpected\n";
        }
        closedir $dh;
    }
}
