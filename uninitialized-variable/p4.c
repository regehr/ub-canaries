// from David Majnemer

#include <stdio.h>
#include <limits.h>

void doit() {
  int x;
  if (x < INT_MIN)
    puts("x < INT_MIN");
}

int main(void) {
  doit();
  return 0;
}
