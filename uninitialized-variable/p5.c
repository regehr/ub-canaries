// from David Majnemer

#include <stdio.h>
#include <limits.h>

void doit() {
  int y;
  if (y > INT_MAX)
    puts("y > INT_MAX");
}

int main(void) {
  doit();
  return 0;
}
