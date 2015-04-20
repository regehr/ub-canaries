// adapted from https://markshroyer.com/2012/06/c-both-true-and-false/

#include <stdio.h>

int main(void) {
  int p;
  if (p)
    puts("p is true");
  if (!p)
    puts("p is false");
  return 0;
}
