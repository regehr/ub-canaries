#include <stdio.h>
#include <limits.h>

void check(int x, int y) {
  printf("%d%d%d%d%d%d", (x << y) < 0, (x << y) == 0, (x << y) > 0,
         (x << y) < x, (x << y) == x, (x << y) > x);
}

void test(int i) {
  check(0, i);
  check(1, i);
  check(-1, i);
  check(INT_MAX, i);
  check(INT_MIN, i);
  check(0x000f, i);
  check(0xf000, i);
  check(0xdeadbeef, i);
  printf("\n");
}

int main(void) {
  int bits = sizeof(int) * CHAR_BIT;
  int i;
  for (i = 0; i < bits; i++)
    test(i);
  return 0;
}
