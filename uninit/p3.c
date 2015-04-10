#include <stdio.h>

void doit(void) {
  int p;
  if (p < 0)
    puts("p < 0");
  if (p < 1)
    puts("p < 1");
  if (p > 1)
    puts("p > 1");
  if (p < 2)
    puts("p < 2");
  if (p > 2)
    puts("p > 2");
  if (p < -1)
    puts("p < -1");
  if (p > -1)
    puts("p > -1");
  if (p < -2)
    puts("p < -2");
  if (p > -2)
    puts("p > -2");
  if (p == 0)
    puts("p == 0");
  if (p == 1)
    puts("p == 1");
  if (p == 2)
    puts("p == 2");
  if (p == 3)
    puts("p == 3");
  if (p == -1)
    puts("p == -1");
  if (p == -2)
    puts("p == -2");
  if (p == -3)
    puts("p == -3");
}

int main(void) {
  doit();
  return 0;
}
