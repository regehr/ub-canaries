#!/usr/bin/perl -w

use strict;
use IPC::Cmd;
use File::Temp;
use File::Compare;

# TODO let people specify these w/o modifying this script
my @compilers = ("gcc", "gcc-4.4", "clang");
my @opts = ("-O0", "-O1", "-O2", "-Os", "-O3");

# TODO support C++
my @files = ();
open INF, "find . -name '*.c' |" or die;
while (my $line = <INF>) {
    chomp $line;
    push @files, $line;
}
close INF;

foreach my $compiler (@compilers) {
    if (!IPC::Cmd::can_run($compiler)) {
        print "can't run $compiler, so skipping it\n";
        next;
    }
    foreach my $opt (@opts) {
        my $all_expected = 1;
        foreach my $file (sort @files) {
            die unless ($file =~ /(.*)\.c$/);
            my $root = $1;
            my $exe = tmpnam();
            system "$compiler -w $opt $file -o $exe";
            my $output = tmpnam();
            system "$exe > $output";
            unlink $exe;
            my @expected_outputs = glob "$root.output*";
            my $expected = 0;
            foreach my $fn (@expected_outputs) {
                $expected |= (0 == File::Compare::compare($output, $fn));
            }
            unlink $output;
            $all_expected &= $expected;
        }
        my $compiler_id = "$compiler $opt";
        print "$compiler_id $all_expected\n";
    }
}
