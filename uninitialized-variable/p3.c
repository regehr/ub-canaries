#include <stdio.h>

void doit(void) {
  int p = 2;
  if (p < 0)
    puts("p < 0");
  if (p > 0)
    puts("p > 0");
  if (p < 1)
    puts("p < 1");
  if (p > 1)
    puts("p > 1");
  if (p < -1)
    puts("p < -1");
  if (p > -1)
    puts("p > -1");
  if (p == 0)
    puts("p == 0");
  if (p == 1)
    puts("p == 1");
  if (p == -1)
    puts("p == -1");
}

int main(void) {
  doit();
  return 0;
}
