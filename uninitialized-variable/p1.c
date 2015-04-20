// from https://markshroyer.com/2012/06/c-both-true-and-false/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  volatile bool p;

  if (p)
    puts("p is true");

  if (!p)
    puts("p is false");

  return 0;
}
