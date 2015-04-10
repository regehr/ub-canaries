#!/usr/bin/perl -w

use strict;

# specify these externally
my @compilers = ("gcc", "gcc-4.8", "gcc-4.4", "clang");
my @opts = ("-O0", "-O1", "-O2", "-Os", "-O3");

my @files = ();
open INF, "find . -name '*.c' |" or die;
while (my $line = <INF>) {
    chomp $line;
    push @files, $line;
}
close INF;

foreach my $file (sort @files) {
    foreach my $compiler (@compilers) {
        foreach my $opt (@opts) {
            print "--- $compiler $opt $file ---\n";
            system "$compiler -w $opt $file";
            system "./a.out";
        }
    }
}
