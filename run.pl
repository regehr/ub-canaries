#!/usr/bin/perl -w

use strict;

# specify these externally
my @compilers = ("gcc-4.9", "clang");
my @opts = ("-O0", "-O1", "-O2", "-Os", "-O3");

my @files = ();
open INF, "find . -name '*.c' |" or die;
while (my $line = <INF>) {
    chomp $line;
    push @files, $line;
}
close INF;

foreach my $file (@files) {
    foreach my $compiler (@compilers) {
        foreach my $opt (@opts) {
            print "--- $compiler $opt $file ---\n";
            system "$compiler $opt $file";
            system "./a.out";
        }
    }
}
