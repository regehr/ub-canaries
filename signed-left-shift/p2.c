#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
  printf("%d%d%d%d%d%d", ((int32_t)0 << 0) < 0, ((int32_t)0 << 0) == 0,
         ((int32_t)0 << 0) > 0, ((int32_t)0 << 0) < 0, ((int32_t)0 << 0) == 0,
         ((int32_t)0 << 0) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 0) < 0, ((int32_t)1 << 0) == 0,
         ((int32_t)1 << 0) > 0, ((int32_t)1 << 0) < 1, ((int32_t)1 << 0) == 1,
         ((int32_t)1 << 0) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 0) < 0, ((int32_t)-1 << 0) == 0,
         ((int32_t)-1 << 0) > 0, ((int32_t)-1 << 0) < -1,
         ((int32_t)-1 << 0) == -1, ((int32_t)-1 << 0) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 0) < 0,
         ((int32_t)INT_MAX << 0) == 0, ((int32_t)INT_MAX << 0) > 0,
         ((int32_t)INT_MAX << 0) < INT_MAX, ((int32_t)INT_MAX << 0) == INT_MAX,
         ((int32_t)INT_MAX << 0) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 0) < 0,
         ((int32_t)INT_MIN << 0) == 0, ((int32_t)INT_MIN << 0) > 0,
         ((int32_t)INT_MIN << 0) < INT_MIN, ((int32_t)INT_MIN << 0) == INT_MIN,
         ((int32_t)INT_MIN << 0) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 0) < 0,
         ((int32_t)0x000f << 0) == 0, ((int32_t)0x000f << 0) > 0,
         ((int32_t)0x000f << 0) < 0x000f, ((int32_t)0x000f << 0) == 0x000f,
         ((int32_t)0x000f << 0) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 0) < 0,
         ((int32_t)0xf000 << 0) == 0, ((int32_t)0xf000 << 0) > 0,
         ((int32_t)0xf000 << 0) < 0xf000, ((int32_t)0xf000 << 0) == 0xf000,
         ((int32_t)0xf000 << 0) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 0) < 0,
         ((int32_t)0xdeadbeef << 0) == 0, ((int32_t)0xdeadbeef << 0) > 0,
         ((int32_t)0xdeadbeef << 0) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 0) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 0) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 1) < 0, ((int32_t)0 << 1) == 0,
         ((int32_t)0 << 1) > 0, ((int32_t)0 << 1) < 0, ((int32_t)0 << 1) == 0,
         ((int32_t)0 << 1) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 1) < 0, ((int32_t)1 << 1) == 0,
         ((int32_t)1 << 1) > 0, ((int32_t)1 << 1) < 1, ((int32_t)1 << 1) == 1,
         ((int32_t)1 << 1) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 1) < 0, ((int32_t)-1 << 1) == 0,
         ((int32_t)-1 << 1) > 0, ((int32_t)-1 << 1) < -1,
         ((int32_t)-1 << 1) == -1, ((int32_t)-1 << 1) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 1) < 0,
         ((int32_t)INT_MAX << 1) == 0, ((int32_t)INT_MAX << 1) > 0,
         ((int32_t)INT_MAX << 1) < INT_MAX, ((int32_t)INT_MAX << 1) == INT_MAX,
         ((int32_t)INT_MAX << 1) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 1) < 0,
         ((int32_t)INT_MIN << 1) == 0, ((int32_t)INT_MIN << 1) > 0,
         ((int32_t)INT_MIN << 1) < INT_MIN, ((int32_t)INT_MIN << 1) == INT_MIN,
         ((int32_t)INT_MIN << 1) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 1) < 0,
         ((int32_t)0x000f << 1) == 0, ((int32_t)0x000f << 1) > 0,
         ((int32_t)0x000f << 1) < 0x000f, ((int32_t)0x000f << 1) == 0x000f,
         ((int32_t)0x000f << 1) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 1) < 0,
         ((int32_t)0xf000 << 1) == 0, ((int32_t)0xf000 << 1) > 0,
         ((int32_t)0xf000 << 1) < 0xf000, ((int32_t)0xf000 << 1) == 0xf000,
         ((int32_t)0xf000 << 1) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 1) < 0,
         ((int32_t)0xdeadbeef << 1) == 0, ((int32_t)0xdeadbeef << 1) > 0,
         ((int32_t)0xdeadbeef << 1) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 1) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 1) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 2) < 0, ((int32_t)0 << 2) == 0,
         ((int32_t)0 << 2) > 0, ((int32_t)0 << 2) < 0, ((int32_t)0 << 2) == 0,
         ((int32_t)0 << 2) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 2) < 0, ((int32_t)1 << 2) == 0,
         ((int32_t)1 << 2) > 0, ((int32_t)1 << 2) < 1, ((int32_t)1 << 2) == 1,
         ((int32_t)1 << 2) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 2) < 0, ((int32_t)-1 << 2) == 0,
         ((int32_t)-1 << 2) > 0, ((int32_t)-1 << 2) < -1,
         ((int32_t)-1 << 2) == -1, ((int32_t)-1 << 2) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 2) < 0,
         ((int32_t)INT_MAX << 2) == 0, ((int32_t)INT_MAX << 2) > 0,
         ((int32_t)INT_MAX << 2) < INT_MAX, ((int32_t)INT_MAX << 2) == INT_MAX,
         ((int32_t)INT_MAX << 2) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 2) < 0,
         ((int32_t)INT_MIN << 2) == 0, ((int32_t)INT_MIN << 2) > 0,
         ((int32_t)INT_MIN << 2) < INT_MIN, ((int32_t)INT_MIN << 2) == INT_MIN,
         ((int32_t)INT_MIN << 2) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 2) < 0,
         ((int32_t)0x000f << 2) == 0, ((int32_t)0x000f << 2) > 0,
         ((int32_t)0x000f << 2) < 0x000f, ((int32_t)0x000f << 2) == 0x000f,
         ((int32_t)0x000f << 2) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 2) < 0,
         ((int32_t)0xf000 << 2) == 0, ((int32_t)0xf000 << 2) > 0,
         ((int32_t)0xf000 << 2) < 0xf000, ((int32_t)0xf000 << 2) == 0xf000,
         ((int32_t)0xf000 << 2) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 2) < 0,
         ((int32_t)0xdeadbeef << 2) == 0, ((int32_t)0xdeadbeef << 2) > 0,
         ((int32_t)0xdeadbeef << 2) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 2) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 2) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 3) < 0, ((int32_t)0 << 3) == 0,
         ((int32_t)0 << 3) > 0, ((int32_t)0 << 3) < 0, ((int32_t)0 << 3) == 0,
         ((int32_t)0 << 3) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 3) < 0, ((int32_t)1 << 3) == 0,
         ((int32_t)1 << 3) > 0, ((int32_t)1 << 3) < 1, ((int32_t)1 << 3) == 1,
         ((int32_t)1 << 3) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 3) < 0, ((int32_t)-1 << 3) == 0,
         ((int32_t)-1 << 3) > 0, ((int32_t)-1 << 3) < -1,
         ((int32_t)-1 << 3) == -1, ((int32_t)-1 << 3) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 3) < 0,
         ((int32_t)INT_MAX << 3) == 0, ((int32_t)INT_MAX << 3) > 0,
         ((int32_t)INT_MAX << 3) < INT_MAX, ((int32_t)INT_MAX << 3) == INT_MAX,
         ((int32_t)INT_MAX << 3) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 3) < 0,
         ((int32_t)INT_MIN << 3) == 0, ((int32_t)INT_MIN << 3) > 0,
         ((int32_t)INT_MIN << 3) < INT_MIN, ((int32_t)INT_MIN << 3) == INT_MIN,
         ((int32_t)INT_MIN << 3) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 3) < 0,
         ((int32_t)0x000f << 3) == 0, ((int32_t)0x000f << 3) > 0,
         ((int32_t)0x000f << 3) < 0x000f, ((int32_t)0x000f << 3) == 0x000f,
         ((int32_t)0x000f << 3) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 3) < 0,
         ((int32_t)0xf000 << 3) == 0, ((int32_t)0xf000 << 3) > 0,
         ((int32_t)0xf000 << 3) < 0xf000, ((int32_t)0xf000 << 3) == 0xf000,
         ((int32_t)0xf000 << 3) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 3) < 0,
         ((int32_t)0xdeadbeef << 3) == 0, ((int32_t)0xdeadbeef << 3) > 0,
         ((int32_t)0xdeadbeef << 3) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 3) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 3) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 4) < 0, ((int32_t)0 << 4) == 0,
         ((int32_t)0 << 4) > 0, ((int32_t)0 << 4) < 0, ((int32_t)0 << 4) == 0,
         ((int32_t)0 << 4) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 4) < 0, ((int32_t)1 << 4) == 0,
         ((int32_t)1 << 4) > 0, ((int32_t)1 << 4) < 1, ((int32_t)1 << 4) == 1,
         ((int32_t)1 << 4) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 4) < 0, ((int32_t)-1 << 4) == 0,
         ((int32_t)-1 << 4) > 0, ((int32_t)-1 << 4) < -1,
         ((int32_t)-1 << 4) == -1, ((int32_t)-1 << 4) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 4) < 0,
         ((int32_t)INT_MAX << 4) == 0, ((int32_t)INT_MAX << 4) > 0,
         ((int32_t)INT_MAX << 4) < INT_MAX, ((int32_t)INT_MAX << 4) == INT_MAX,
         ((int32_t)INT_MAX << 4) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 4) < 0,
         ((int32_t)INT_MIN << 4) == 0, ((int32_t)INT_MIN << 4) > 0,
         ((int32_t)INT_MIN << 4) < INT_MIN, ((int32_t)INT_MIN << 4) == INT_MIN,
         ((int32_t)INT_MIN << 4) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 4) < 0,
         ((int32_t)0x000f << 4) == 0, ((int32_t)0x000f << 4) > 0,
         ((int32_t)0x000f << 4) < 0x000f, ((int32_t)0x000f << 4) == 0x000f,
         ((int32_t)0x000f << 4) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 4) < 0,
         ((int32_t)0xf000 << 4) == 0, ((int32_t)0xf000 << 4) > 0,
         ((int32_t)0xf000 << 4) < 0xf000, ((int32_t)0xf000 << 4) == 0xf000,
         ((int32_t)0xf000 << 4) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 4) < 0,
         ((int32_t)0xdeadbeef << 4) == 0, ((int32_t)0xdeadbeef << 4) > 0,
         ((int32_t)0xdeadbeef << 4) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 4) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 4) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 5) < 0, ((int32_t)0 << 5) == 0,
         ((int32_t)0 << 5) > 0, ((int32_t)0 << 5) < 0, ((int32_t)0 << 5) == 0,
         ((int32_t)0 << 5) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 5) < 0, ((int32_t)1 << 5) == 0,
         ((int32_t)1 << 5) > 0, ((int32_t)1 << 5) < 1, ((int32_t)1 << 5) == 1,
         ((int32_t)1 << 5) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 5) < 0, ((int32_t)-1 << 5) == 0,
         ((int32_t)-1 << 5) > 0, ((int32_t)-1 << 5) < -1,
         ((int32_t)-1 << 5) == -1, ((int32_t)-1 << 5) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 5) < 0,
         ((int32_t)INT_MAX << 5) == 0, ((int32_t)INT_MAX << 5) > 0,
         ((int32_t)INT_MAX << 5) < INT_MAX, ((int32_t)INT_MAX << 5) == INT_MAX,
         ((int32_t)INT_MAX << 5) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 5) < 0,
         ((int32_t)INT_MIN << 5) == 0, ((int32_t)INT_MIN << 5) > 0,
         ((int32_t)INT_MIN << 5) < INT_MIN, ((int32_t)INT_MIN << 5) == INT_MIN,
         ((int32_t)INT_MIN << 5) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 5) < 0,
         ((int32_t)0x000f << 5) == 0, ((int32_t)0x000f << 5) > 0,
         ((int32_t)0x000f << 5) < 0x000f, ((int32_t)0x000f << 5) == 0x000f,
         ((int32_t)0x000f << 5) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 5) < 0,
         ((int32_t)0xf000 << 5) == 0, ((int32_t)0xf000 << 5) > 0,
         ((int32_t)0xf000 << 5) < 0xf000, ((int32_t)0xf000 << 5) == 0xf000,
         ((int32_t)0xf000 << 5) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 5) < 0,
         ((int32_t)0xdeadbeef << 5) == 0, ((int32_t)0xdeadbeef << 5) > 0,
         ((int32_t)0xdeadbeef << 5) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 5) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 5) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 6) < 0, ((int32_t)0 << 6) == 0,
         ((int32_t)0 << 6) > 0, ((int32_t)0 << 6) < 0, ((int32_t)0 << 6) == 0,
         ((int32_t)0 << 6) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 6) < 0, ((int32_t)1 << 6) == 0,
         ((int32_t)1 << 6) > 0, ((int32_t)1 << 6) < 1, ((int32_t)1 << 6) == 1,
         ((int32_t)1 << 6) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 6) < 0, ((int32_t)-1 << 6) == 0,
         ((int32_t)-1 << 6) > 0, ((int32_t)-1 << 6) < -1,
         ((int32_t)-1 << 6) == -1, ((int32_t)-1 << 6) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 6) < 0,
         ((int32_t)INT_MAX << 6) == 0, ((int32_t)INT_MAX << 6) > 0,
         ((int32_t)INT_MAX << 6) < INT_MAX, ((int32_t)INT_MAX << 6) == INT_MAX,
         ((int32_t)INT_MAX << 6) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 6) < 0,
         ((int32_t)INT_MIN << 6) == 0, ((int32_t)INT_MIN << 6) > 0,
         ((int32_t)INT_MIN << 6) < INT_MIN, ((int32_t)INT_MIN << 6) == INT_MIN,
         ((int32_t)INT_MIN << 6) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 6) < 0,
         ((int32_t)0x000f << 6) == 0, ((int32_t)0x000f << 6) > 0,
         ((int32_t)0x000f << 6) < 0x000f, ((int32_t)0x000f << 6) == 0x000f,
         ((int32_t)0x000f << 6) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 6) < 0,
         ((int32_t)0xf000 << 6) == 0, ((int32_t)0xf000 << 6) > 0,
         ((int32_t)0xf000 << 6) < 0xf000, ((int32_t)0xf000 << 6) == 0xf000,
         ((int32_t)0xf000 << 6) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 6) < 0,
         ((int32_t)0xdeadbeef << 6) == 0, ((int32_t)0xdeadbeef << 6) > 0,
         ((int32_t)0xdeadbeef << 6) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 6) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 6) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 7) < 0, ((int32_t)0 << 7) == 0,
         ((int32_t)0 << 7) > 0, ((int32_t)0 << 7) < 0, ((int32_t)0 << 7) == 0,
         ((int32_t)0 << 7) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 7) < 0, ((int32_t)1 << 7) == 0,
         ((int32_t)1 << 7) > 0, ((int32_t)1 << 7) < 1, ((int32_t)1 << 7) == 1,
         ((int32_t)1 << 7) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 7) < 0, ((int32_t)-1 << 7) == 0,
         ((int32_t)-1 << 7) > 0, ((int32_t)-1 << 7) < -1,
         ((int32_t)-1 << 7) == -1, ((int32_t)-1 << 7) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 7) < 0,
         ((int32_t)INT_MAX << 7) == 0, ((int32_t)INT_MAX << 7) > 0,
         ((int32_t)INT_MAX << 7) < INT_MAX, ((int32_t)INT_MAX << 7) == INT_MAX,
         ((int32_t)INT_MAX << 7) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 7) < 0,
         ((int32_t)INT_MIN << 7) == 0, ((int32_t)INT_MIN << 7) > 0,
         ((int32_t)INT_MIN << 7) < INT_MIN, ((int32_t)INT_MIN << 7) == INT_MIN,
         ((int32_t)INT_MIN << 7) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 7) < 0,
         ((int32_t)0x000f << 7) == 0, ((int32_t)0x000f << 7) > 0,
         ((int32_t)0x000f << 7) < 0x000f, ((int32_t)0x000f << 7) == 0x000f,
         ((int32_t)0x000f << 7) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 7) < 0,
         ((int32_t)0xf000 << 7) == 0, ((int32_t)0xf000 << 7) > 0,
         ((int32_t)0xf000 << 7) < 0xf000, ((int32_t)0xf000 << 7) == 0xf000,
         ((int32_t)0xf000 << 7) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 7) < 0,
         ((int32_t)0xdeadbeef << 7) == 0, ((int32_t)0xdeadbeef << 7) > 0,
         ((int32_t)0xdeadbeef << 7) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 7) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 7) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 8) < 0, ((int32_t)0 << 8) == 0,
         ((int32_t)0 << 8) > 0, ((int32_t)0 << 8) < 0, ((int32_t)0 << 8) == 0,
         ((int32_t)0 << 8) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 8) < 0, ((int32_t)1 << 8) == 0,
         ((int32_t)1 << 8) > 0, ((int32_t)1 << 8) < 1, ((int32_t)1 << 8) == 1,
         ((int32_t)1 << 8) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 8) < 0, ((int32_t)-1 << 8) == 0,
         ((int32_t)-1 << 8) > 0, ((int32_t)-1 << 8) < -1,
         ((int32_t)-1 << 8) == -1, ((int32_t)-1 << 8) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 8) < 0,
         ((int32_t)INT_MAX << 8) == 0, ((int32_t)INT_MAX << 8) > 0,
         ((int32_t)INT_MAX << 8) < INT_MAX, ((int32_t)INT_MAX << 8) == INT_MAX,
         ((int32_t)INT_MAX << 8) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 8) < 0,
         ((int32_t)INT_MIN << 8) == 0, ((int32_t)INT_MIN << 8) > 0,
         ((int32_t)INT_MIN << 8) < INT_MIN, ((int32_t)INT_MIN << 8) == INT_MIN,
         ((int32_t)INT_MIN << 8) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 8) < 0,
         ((int32_t)0x000f << 8) == 0, ((int32_t)0x000f << 8) > 0,
         ((int32_t)0x000f << 8) < 0x000f, ((int32_t)0x000f << 8) == 0x000f,
         ((int32_t)0x000f << 8) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 8) < 0,
         ((int32_t)0xf000 << 8) == 0, ((int32_t)0xf000 << 8) > 0,
         ((int32_t)0xf000 << 8) < 0xf000, ((int32_t)0xf000 << 8) == 0xf000,
         ((int32_t)0xf000 << 8) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 8) < 0,
         ((int32_t)0xdeadbeef << 8) == 0, ((int32_t)0xdeadbeef << 8) > 0,
         ((int32_t)0xdeadbeef << 8) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 8) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 8) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 9) < 0, ((int32_t)0 << 9) == 0,
         ((int32_t)0 << 9) > 0, ((int32_t)0 << 9) < 0, ((int32_t)0 << 9) == 0,
         ((int32_t)0 << 9) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 9) < 0, ((int32_t)1 << 9) == 0,
         ((int32_t)1 << 9) > 0, ((int32_t)1 << 9) < 1, ((int32_t)1 << 9) == 1,
         ((int32_t)1 << 9) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 9) < 0, ((int32_t)-1 << 9) == 0,
         ((int32_t)-1 << 9) > 0, ((int32_t)-1 << 9) < -1,
         ((int32_t)-1 << 9) == -1, ((int32_t)-1 << 9) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 9) < 0,
         ((int32_t)INT_MAX << 9) == 0, ((int32_t)INT_MAX << 9) > 0,
         ((int32_t)INT_MAX << 9) < INT_MAX, ((int32_t)INT_MAX << 9) == INT_MAX,
         ((int32_t)INT_MAX << 9) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 9) < 0,
         ((int32_t)INT_MIN << 9) == 0, ((int32_t)INT_MIN << 9) > 0,
         ((int32_t)INT_MIN << 9) < INT_MIN, ((int32_t)INT_MIN << 9) == INT_MIN,
         ((int32_t)INT_MIN << 9) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 9) < 0,
         ((int32_t)0x000f << 9) == 0, ((int32_t)0x000f << 9) > 0,
         ((int32_t)0x000f << 9) < 0x000f, ((int32_t)0x000f << 9) == 0x000f,
         ((int32_t)0x000f << 9) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 9) < 0,
         ((int32_t)0xf000 << 9) == 0, ((int32_t)0xf000 << 9) > 0,
         ((int32_t)0xf000 << 9) < 0xf000, ((int32_t)0xf000 << 9) == 0xf000,
         ((int32_t)0xf000 << 9) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 9) < 0,
         ((int32_t)0xdeadbeef << 9) == 0, ((int32_t)0xdeadbeef << 9) > 0,
         ((int32_t)0xdeadbeef << 9) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 9) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 9) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 10) < 0, ((int32_t)0 << 10) == 0,
         ((int32_t)0 << 10) > 0, ((int32_t)0 << 10) < 0,
         ((int32_t)0 << 10) == 0, ((int32_t)0 << 10) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 10) < 0, ((int32_t)1 << 10) == 0,
         ((int32_t)1 << 10) > 0, ((int32_t)1 << 10) < 1,
         ((int32_t)1 << 10) == 1, ((int32_t)1 << 10) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 10) < 0, ((int32_t)-1 << 10) == 0,
         ((int32_t)-1 << 10) > 0, ((int32_t)-1 << 10) < -1,
         ((int32_t)-1 << 10) == -1, ((int32_t)-1 << 10) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 10) < 0,
         ((int32_t)INT_MAX << 10) == 0, ((int32_t)INT_MAX << 10) > 0,
         ((int32_t)INT_MAX << 10) < INT_MAX,
         ((int32_t)INT_MAX << 10) == INT_MAX,
         ((int32_t)INT_MAX << 10) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 10) < 0,
         ((int32_t)INT_MIN << 10) == 0, ((int32_t)INT_MIN << 10) > 0,
         ((int32_t)INT_MIN << 10) < INT_MIN,
         ((int32_t)INT_MIN << 10) == INT_MIN,
         ((int32_t)INT_MIN << 10) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 10) < 0,
         ((int32_t)0x000f << 10) == 0, ((int32_t)0x000f << 10) > 0,
         ((int32_t)0x000f << 10) < 0x000f, ((int32_t)0x000f << 10) == 0x000f,
         ((int32_t)0x000f << 10) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 10) < 0,
         ((int32_t)0xf000 << 10) == 0, ((int32_t)0xf000 << 10) > 0,
         ((int32_t)0xf000 << 10) < 0xf000, ((int32_t)0xf000 << 10) == 0xf000,
         ((int32_t)0xf000 << 10) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 10) < 0,
         ((int32_t)0xdeadbeef << 10) == 0, ((int32_t)0xdeadbeef << 10) > 0,
         ((int32_t)0xdeadbeef << 10) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 10) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 10) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 11) < 0, ((int32_t)0 << 11) == 0,
         ((int32_t)0 << 11) > 0, ((int32_t)0 << 11) < 0,
         ((int32_t)0 << 11) == 0, ((int32_t)0 << 11) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 11) < 0, ((int32_t)1 << 11) == 0,
         ((int32_t)1 << 11) > 0, ((int32_t)1 << 11) < 1,
         ((int32_t)1 << 11) == 1, ((int32_t)1 << 11) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 11) < 0, ((int32_t)-1 << 11) == 0,
         ((int32_t)-1 << 11) > 0, ((int32_t)-1 << 11) < -1,
         ((int32_t)-1 << 11) == -1, ((int32_t)-1 << 11) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 11) < 0,
         ((int32_t)INT_MAX << 11) == 0, ((int32_t)INT_MAX << 11) > 0,
         ((int32_t)INT_MAX << 11) < INT_MAX,
         ((int32_t)INT_MAX << 11) == INT_MAX,
         ((int32_t)INT_MAX << 11) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 11) < 0,
         ((int32_t)INT_MIN << 11) == 0, ((int32_t)INT_MIN << 11) > 0,
         ((int32_t)INT_MIN << 11) < INT_MIN,
         ((int32_t)INT_MIN << 11) == INT_MIN,
         ((int32_t)INT_MIN << 11) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 11) < 0,
         ((int32_t)0x000f << 11) == 0, ((int32_t)0x000f << 11) > 0,
         ((int32_t)0x000f << 11) < 0x000f, ((int32_t)0x000f << 11) == 0x000f,
         ((int32_t)0x000f << 11) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 11) < 0,
         ((int32_t)0xf000 << 11) == 0, ((int32_t)0xf000 << 11) > 0,
         ((int32_t)0xf000 << 11) < 0xf000, ((int32_t)0xf000 << 11) == 0xf000,
         ((int32_t)0xf000 << 11) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 11) < 0,
         ((int32_t)0xdeadbeef << 11) == 0, ((int32_t)0xdeadbeef << 11) > 0,
         ((int32_t)0xdeadbeef << 11) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 11) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 11) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 12) < 0, ((int32_t)0 << 12) == 0,
         ((int32_t)0 << 12) > 0, ((int32_t)0 << 12) < 0,
         ((int32_t)0 << 12) == 0, ((int32_t)0 << 12) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 12) < 0, ((int32_t)1 << 12) == 0,
         ((int32_t)1 << 12) > 0, ((int32_t)1 << 12) < 1,
         ((int32_t)1 << 12) == 1, ((int32_t)1 << 12) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 12) < 0, ((int32_t)-1 << 12) == 0,
         ((int32_t)-1 << 12) > 0, ((int32_t)-1 << 12) < -1,
         ((int32_t)-1 << 12) == -1, ((int32_t)-1 << 12) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 12) < 0,
         ((int32_t)INT_MAX << 12) == 0, ((int32_t)INT_MAX << 12) > 0,
         ((int32_t)INT_MAX << 12) < INT_MAX,
         ((int32_t)INT_MAX << 12) == INT_MAX,
         ((int32_t)INT_MAX << 12) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 12) < 0,
         ((int32_t)INT_MIN << 12) == 0, ((int32_t)INT_MIN << 12) > 0,
         ((int32_t)INT_MIN << 12) < INT_MIN,
         ((int32_t)INT_MIN << 12) == INT_MIN,
         ((int32_t)INT_MIN << 12) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 12) < 0,
         ((int32_t)0x000f << 12) == 0, ((int32_t)0x000f << 12) > 0,
         ((int32_t)0x000f << 12) < 0x000f, ((int32_t)0x000f << 12) == 0x000f,
         ((int32_t)0x000f << 12) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 12) < 0,
         ((int32_t)0xf000 << 12) == 0, ((int32_t)0xf000 << 12) > 0,
         ((int32_t)0xf000 << 12) < 0xf000, ((int32_t)0xf000 << 12) == 0xf000,
         ((int32_t)0xf000 << 12) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 12) < 0,
         ((int32_t)0xdeadbeef << 12) == 0, ((int32_t)0xdeadbeef << 12) > 0,
         ((int32_t)0xdeadbeef << 12) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 12) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 12) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 13) < 0, ((int32_t)0 << 13) == 0,
         ((int32_t)0 << 13) > 0, ((int32_t)0 << 13) < 0,
         ((int32_t)0 << 13) == 0, ((int32_t)0 << 13) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 13) < 0, ((int32_t)1 << 13) == 0,
         ((int32_t)1 << 13) > 0, ((int32_t)1 << 13) < 1,
         ((int32_t)1 << 13) == 1, ((int32_t)1 << 13) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 13) < 0, ((int32_t)-1 << 13) == 0,
         ((int32_t)-1 << 13) > 0, ((int32_t)-1 << 13) < -1,
         ((int32_t)-1 << 13) == -1, ((int32_t)-1 << 13) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 13) < 0,
         ((int32_t)INT_MAX << 13) == 0, ((int32_t)INT_MAX << 13) > 0,
         ((int32_t)INT_MAX << 13) < INT_MAX,
         ((int32_t)INT_MAX << 13) == INT_MAX,
         ((int32_t)INT_MAX << 13) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 13) < 0,
         ((int32_t)INT_MIN << 13) == 0, ((int32_t)INT_MIN << 13) > 0,
         ((int32_t)INT_MIN << 13) < INT_MIN,
         ((int32_t)INT_MIN << 13) == INT_MIN,
         ((int32_t)INT_MIN << 13) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 13) < 0,
         ((int32_t)0x000f << 13) == 0, ((int32_t)0x000f << 13) > 0,
         ((int32_t)0x000f << 13) < 0x000f, ((int32_t)0x000f << 13) == 0x000f,
         ((int32_t)0x000f << 13) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 13) < 0,
         ((int32_t)0xf000 << 13) == 0, ((int32_t)0xf000 << 13) > 0,
         ((int32_t)0xf000 << 13) < 0xf000, ((int32_t)0xf000 << 13) == 0xf000,
         ((int32_t)0xf000 << 13) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 13) < 0,
         ((int32_t)0xdeadbeef << 13) == 0, ((int32_t)0xdeadbeef << 13) > 0,
         ((int32_t)0xdeadbeef << 13) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 13) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 13) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 14) < 0, ((int32_t)0 << 14) == 0,
         ((int32_t)0 << 14) > 0, ((int32_t)0 << 14) < 0,
         ((int32_t)0 << 14) == 0, ((int32_t)0 << 14) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 14) < 0, ((int32_t)1 << 14) == 0,
         ((int32_t)1 << 14) > 0, ((int32_t)1 << 14) < 1,
         ((int32_t)1 << 14) == 1, ((int32_t)1 << 14) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 14) < 0, ((int32_t)-1 << 14) == 0,
         ((int32_t)-1 << 14) > 0, ((int32_t)-1 << 14) < -1,
         ((int32_t)-1 << 14) == -1, ((int32_t)-1 << 14) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 14) < 0,
         ((int32_t)INT_MAX << 14) == 0, ((int32_t)INT_MAX << 14) > 0,
         ((int32_t)INT_MAX << 14) < INT_MAX,
         ((int32_t)INT_MAX << 14) == INT_MAX,
         ((int32_t)INT_MAX << 14) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 14) < 0,
         ((int32_t)INT_MIN << 14) == 0, ((int32_t)INT_MIN << 14) > 0,
         ((int32_t)INT_MIN << 14) < INT_MIN,
         ((int32_t)INT_MIN << 14) == INT_MIN,
         ((int32_t)INT_MIN << 14) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 14) < 0,
         ((int32_t)0x000f << 14) == 0, ((int32_t)0x000f << 14) > 0,
         ((int32_t)0x000f << 14) < 0x000f, ((int32_t)0x000f << 14) == 0x000f,
         ((int32_t)0x000f << 14) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 14) < 0,
         ((int32_t)0xf000 << 14) == 0, ((int32_t)0xf000 << 14) > 0,
         ((int32_t)0xf000 << 14) < 0xf000, ((int32_t)0xf000 << 14) == 0xf000,
         ((int32_t)0xf000 << 14) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 14) < 0,
         ((int32_t)0xdeadbeef << 14) == 0, ((int32_t)0xdeadbeef << 14) > 0,
         ((int32_t)0xdeadbeef << 14) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 14) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 14) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 15) < 0, ((int32_t)0 << 15) == 0,
         ((int32_t)0 << 15) > 0, ((int32_t)0 << 15) < 0,
         ((int32_t)0 << 15) == 0, ((int32_t)0 << 15) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 15) < 0, ((int32_t)1 << 15) == 0,
         ((int32_t)1 << 15) > 0, ((int32_t)1 << 15) < 1,
         ((int32_t)1 << 15) == 1, ((int32_t)1 << 15) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 15) < 0, ((int32_t)-1 << 15) == 0,
         ((int32_t)-1 << 15) > 0, ((int32_t)-1 << 15) < -1,
         ((int32_t)-1 << 15) == -1, ((int32_t)-1 << 15) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 15) < 0,
         ((int32_t)INT_MAX << 15) == 0, ((int32_t)INT_MAX << 15) > 0,
         ((int32_t)INT_MAX << 15) < INT_MAX,
         ((int32_t)INT_MAX << 15) == INT_MAX,
         ((int32_t)INT_MAX << 15) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 15) < 0,
         ((int32_t)INT_MIN << 15) == 0, ((int32_t)INT_MIN << 15) > 0,
         ((int32_t)INT_MIN << 15) < INT_MIN,
         ((int32_t)INT_MIN << 15) == INT_MIN,
         ((int32_t)INT_MIN << 15) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 15) < 0,
         ((int32_t)0x000f << 15) == 0, ((int32_t)0x000f << 15) > 0,
         ((int32_t)0x000f << 15) < 0x000f, ((int32_t)0x000f << 15) == 0x000f,
         ((int32_t)0x000f << 15) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 15) < 0,
         ((int32_t)0xf000 << 15) == 0, ((int32_t)0xf000 << 15) > 0,
         ((int32_t)0xf000 << 15) < 0xf000, ((int32_t)0xf000 << 15) == 0xf000,
         ((int32_t)0xf000 << 15) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 15) < 0,
         ((int32_t)0xdeadbeef << 15) == 0, ((int32_t)0xdeadbeef << 15) > 0,
         ((int32_t)0xdeadbeef << 15) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 15) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 15) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 16) < 0, ((int32_t)0 << 16) == 0,
         ((int32_t)0 << 16) > 0, ((int32_t)0 << 16) < 0,
         ((int32_t)0 << 16) == 0, ((int32_t)0 << 16) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 16) < 0, ((int32_t)1 << 16) == 0,
         ((int32_t)1 << 16) > 0, ((int32_t)1 << 16) < 1,
         ((int32_t)1 << 16) == 1, ((int32_t)1 << 16) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 16) < 0, ((int32_t)-1 << 16) == 0,
         ((int32_t)-1 << 16) > 0, ((int32_t)-1 << 16) < -1,
         ((int32_t)-1 << 16) == -1, ((int32_t)-1 << 16) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 16) < 0,
         ((int32_t)INT_MAX << 16) == 0, ((int32_t)INT_MAX << 16) > 0,
         ((int32_t)INT_MAX << 16) < INT_MAX,
         ((int32_t)INT_MAX << 16) == INT_MAX,
         ((int32_t)INT_MAX << 16) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 16) < 0,
         ((int32_t)INT_MIN << 16) == 0, ((int32_t)INT_MIN << 16) > 0,
         ((int32_t)INT_MIN << 16) < INT_MIN,
         ((int32_t)INT_MIN << 16) == INT_MIN,
         ((int32_t)INT_MIN << 16) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 16) < 0,
         ((int32_t)0x000f << 16) == 0, ((int32_t)0x000f << 16) > 0,
         ((int32_t)0x000f << 16) < 0x000f, ((int32_t)0x000f << 16) == 0x000f,
         ((int32_t)0x000f << 16) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 16) < 0,
         ((int32_t)0xf000 << 16) == 0, ((int32_t)0xf000 << 16) > 0,
         ((int32_t)0xf000 << 16) < 0xf000, ((int32_t)0xf000 << 16) == 0xf000,
         ((int32_t)0xf000 << 16) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 16) < 0,
         ((int32_t)0xdeadbeef << 16) == 0, ((int32_t)0xdeadbeef << 16) > 0,
         ((int32_t)0xdeadbeef << 16) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 16) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 16) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 17) < 0, ((int32_t)0 << 17) == 0,
         ((int32_t)0 << 17) > 0, ((int32_t)0 << 17) < 0,
         ((int32_t)0 << 17) == 0, ((int32_t)0 << 17) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 17) < 0, ((int32_t)1 << 17) == 0,
         ((int32_t)1 << 17) > 0, ((int32_t)1 << 17) < 1,
         ((int32_t)1 << 17) == 1, ((int32_t)1 << 17) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 17) < 0, ((int32_t)-1 << 17) == 0,
         ((int32_t)-1 << 17) > 0, ((int32_t)-1 << 17) < -1,
         ((int32_t)-1 << 17) == -1, ((int32_t)-1 << 17) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 17) < 0,
         ((int32_t)INT_MAX << 17) == 0, ((int32_t)INT_MAX << 17) > 0,
         ((int32_t)INT_MAX << 17) < INT_MAX,
         ((int32_t)INT_MAX << 17) == INT_MAX,
         ((int32_t)INT_MAX << 17) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 17) < 0,
         ((int32_t)INT_MIN << 17) == 0, ((int32_t)INT_MIN << 17) > 0,
         ((int32_t)INT_MIN << 17) < INT_MIN,
         ((int32_t)INT_MIN << 17) == INT_MIN,
         ((int32_t)INT_MIN << 17) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 17) < 0,
         ((int32_t)0x000f << 17) == 0, ((int32_t)0x000f << 17) > 0,
         ((int32_t)0x000f << 17) < 0x000f, ((int32_t)0x000f << 17) == 0x000f,
         ((int32_t)0x000f << 17) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 17) < 0,
         ((int32_t)0xf000 << 17) == 0, ((int32_t)0xf000 << 17) > 0,
         ((int32_t)0xf000 << 17) < 0xf000, ((int32_t)0xf000 << 17) == 0xf000,
         ((int32_t)0xf000 << 17) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 17) < 0,
         ((int32_t)0xdeadbeef << 17) == 0, ((int32_t)0xdeadbeef << 17) > 0,
         ((int32_t)0xdeadbeef << 17) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 17) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 17) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 18) < 0, ((int32_t)0 << 18) == 0,
         ((int32_t)0 << 18) > 0, ((int32_t)0 << 18) < 0,
         ((int32_t)0 << 18) == 0, ((int32_t)0 << 18) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 18) < 0, ((int32_t)1 << 18) == 0,
         ((int32_t)1 << 18) > 0, ((int32_t)1 << 18) < 1,
         ((int32_t)1 << 18) == 1, ((int32_t)1 << 18) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 18) < 0, ((int32_t)-1 << 18) == 0,
         ((int32_t)-1 << 18) > 0, ((int32_t)-1 << 18) < -1,
         ((int32_t)-1 << 18) == -1, ((int32_t)-1 << 18) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 18) < 0,
         ((int32_t)INT_MAX << 18) == 0, ((int32_t)INT_MAX << 18) > 0,
         ((int32_t)INT_MAX << 18) < INT_MAX,
         ((int32_t)INT_MAX << 18) == INT_MAX,
         ((int32_t)INT_MAX << 18) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 18) < 0,
         ((int32_t)INT_MIN << 18) == 0, ((int32_t)INT_MIN << 18) > 0,
         ((int32_t)INT_MIN << 18) < INT_MIN,
         ((int32_t)INT_MIN << 18) == INT_MIN,
         ((int32_t)INT_MIN << 18) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 18) < 0,
         ((int32_t)0x000f << 18) == 0, ((int32_t)0x000f << 18) > 0,
         ((int32_t)0x000f << 18) < 0x000f, ((int32_t)0x000f << 18) == 0x000f,
         ((int32_t)0x000f << 18) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 18) < 0,
         ((int32_t)0xf000 << 18) == 0, ((int32_t)0xf000 << 18) > 0,
         ((int32_t)0xf000 << 18) < 0xf000, ((int32_t)0xf000 << 18) == 0xf000,
         ((int32_t)0xf000 << 18) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 18) < 0,
         ((int32_t)0xdeadbeef << 18) == 0, ((int32_t)0xdeadbeef << 18) > 0,
         ((int32_t)0xdeadbeef << 18) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 18) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 18) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 19) < 0, ((int32_t)0 << 19) == 0,
         ((int32_t)0 << 19) > 0, ((int32_t)0 << 19) < 0,
         ((int32_t)0 << 19) == 0, ((int32_t)0 << 19) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 19) < 0, ((int32_t)1 << 19) == 0,
         ((int32_t)1 << 19) > 0, ((int32_t)1 << 19) < 1,
         ((int32_t)1 << 19) == 1, ((int32_t)1 << 19) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 19) < 0, ((int32_t)-1 << 19) == 0,
         ((int32_t)-1 << 19) > 0, ((int32_t)-1 << 19) < -1,
         ((int32_t)-1 << 19) == -1, ((int32_t)-1 << 19) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 19) < 0,
         ((int32_t)INT_MAX << 19) == 0, ((int32_t)INT_MAX << 19) > 0,
         ((int32_t)INT_MAX << 19) < INT_MAX,
         ((int32_t)INT_MAX << 19) == INT_MAX,
         ((int32_t)INT_MAX << 19) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 19) < 0,
         ((int32_t)INT_MIN << 19) == 0, ((int32_t)INT_MIN << 19) > 0,
         ((int32_t)INT_MIN << 19) < INT_MIN,
         ((int32_t)INT_MIN << 19) == INT_MIN,
         ((int32_t)INT_MIN << 19) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 19) < 0,
         ((int32_t)0x000f << 19) == 0, ((int32_t)0x000f << 19) > 0,
         ((int32_t)0x000f << 19) < 0x000f, ((int32_t)0x000f << 19) == 0x000f,
         ((int32_t)0x000f << 19) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 19) < 0,
         ((int32_t)0xf000 << 19) == 0, ((int32_t)0xf000 << 19) > 0,
         ((int32_t)0xf000 << 19) < 0xf000, ((int32_t)0xf000 << 19) == 0xf000,
         ((int32_t)0xf000 << 19) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 19) < 0,
         ((int32_t)0xdeadbeef << 19) == 0, ((int32_t)0xdeadbeef << 19) > 0,
         ((int32_t)0xdeadbeef << 19) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 19) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 19) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 20) < 0, ((int32_t)0 << 20) == 0,
         ((int32_t)0 << 20) > 0, ((int32_t)0 << 20) < 0,
         ((int32_t)0 << 20) == 0, ((int32_t)0 << 20) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 20) < 0, ((int32_t)1 << 20) == 0,
         ((int32_t)1 << 20) > 0, ((int32_t)1 << 20) < 1,
         ((int32_t)1 << 20) == 1, ((int32_t)1 << 20) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 20) < 0, ((int32_t)-1 << 20) == 0,
         ((int32_t)-1 << 20) > 0, ((int32_t)-1 << 20) < -1,
         ((int32_t)-1 << 20) == -1, ((int32_t)-1 << 20) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 20) < 0,
         ((int32_t)INT_MAX << 20) == 0, ((int32_t)INT_MAX << 20) > 0,
         ((int32_t)INT_MAX << 20) < INT_MAX,
         ((int32_t)INT_MAX << 20) == INT_MAX,
         ((int32_t)INT_MAX << 20) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 20) < 0,
         ((int32_t)INT_MIN << 20) == 0, ((int32_t)INT_MIN << 20) > 0,
         ((int32_t)INT_MIN << 20) < INT_MIN,
         ((int32_t)INT_MIN << 20) == INT_MIN,
         ((int32_t)INT_MIN << 20) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 20) < 0,
         ((int32_t)0x000f << 20) == 0, ((int32_t)0x000f << 20) > 0,
         ((int32_t)0x000f << 20) < 0x000f, ((int32_t)0x000f << 20) == 0x000f,
         ((int32_t)0x000f << 20) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 20) < 0,
         ((int32_t)0xf000 << 20) == 0, ((int32_t)0xf000 << 20) > 0,
         ((int32_t)0xf000 << 20) < 0xf000, ((int32_t)0xf000 << 20) == 0xf000,
         ((int32_t)0xf000 << 20) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 20) < 0,
         ((int32_t)0xdeadbeef << 20) == 0, ((int32_t)0xdeadbeef << 20) > 0,
         ((int32_t)0xdeadbeef << 20) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 20) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 20) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 21) < 0, ((int32_t)0 << 21) == 0,
         ((int32_t)0 << 21) > 0, ((int32_t)0 << 21) < 0,
         ((int32_t)0 << 21) == 0, ((int32_t)0 << 21) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 21) < 0, ((int32_t)1 << 21) == 0,
         ((int32_t)1 << 21) > 0, ((int32_t)1 << 21) < 1,
         ((int32_t)1 << 21) == 1, ((int32_t)1 << 21) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 21) < 0, ((int32_t)-1 << 21) == 0,
         ((int32_t)-1 << 21) > 0, ((int32_t)-1 << 21) < -1,
         ((int32_t)-1 << 21) == -1, ((int32_t)-1 << 21) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 21) < 0,
         ((int32_t)INT_MAX << 21) == 0, ((int32_t)INT_MAX << 21) > 0,
         ((int32_t)INT_MAX << 21) < INT_MAX,
         ((int32_t)INT_MAX << 21) == INT_MAX,
         ((int32_t)INT_MAX << 21) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 21) < 0,
         ((int32_t)INT_MIN << 21) == 0, ((int32_t)INT_MIN << 21) > 0,
         ((int32_t)INT_MIN << 21) < INT_MIN,
         ((int32_t)INT_MIN << 21) == INT_MIN,
         ((int32_t)INT_MIN << 21) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 21) < 0,
         ((int32_t)0x000f << 21) == 0, ((int32_t)0x000f << 21) > 0,
         ((int32_t)0x000f << 21) < 0x000f, ((int32_t)0x000f << 21) == 0x000f,
         ((int32_t)0x000f << 21) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 21) < 0,
         ((int32_t)0xf000 << 21) == 0, ((int32_t)0xf000 << 21) > 0,
         ((int32_t)0xf000 << 21) < 0xf000, ((int32_t)0xf000 << 21) == 0xf000,
         ((int32_t)0xf000 << 21) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 21) < 0,
         ((int32_t)0xdeadbeef << 21) == 0, ((int32_t)0xdeadbeef << 21) > 0,
         ((int32_t)0xdeadbeef << 21) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 21) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 21) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 22) < 0, ((int32_t)0 << 22) == 0,
         ((int32_t)0 << 22) > 0, ((int32_t)0 << 22) < 0,
         ((int32_t)0 << 22) == 0, ((int32_t)0 << 22) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 22) < 0, ((int32_t)1 << 22) == 0,
         ((int32_t)1 << 22) > 0, ((int32_t)1 << 22) < 1,
         ((int32_t)1 << 22) == 1, ((int32_t)1 << 22) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 22) < 0, ((int32_t)-1 << 22) == 0,
         ((int32_t)-1 << 22) > 0, ((int32_t)-1 << 22) < -1,
         ((int32_t)-1 << 22) == -1, ((int32_t)-1 << 22) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 22) < 0,
         ((int32_t)INT_MAX << 22) == 0, ((int32_t)INT_MAX << 22) > 0,
         ((int32_t)INT_MAX << 22) < INT_MAX,
         ((int32_t)INT_MAX << 22) == INT_MAX,
         ((int32_t)INT_MAX << 22) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 22) < 0,
         ((int32_t)INT_MIN << 22) == 0, ((int32_t)INT_MIN << 22) > 0,
         ((int32_t)INT_MIN << 22) < INT_MIN,
         ((int32_t)INT_MIN << 22) == INT_MIN,
         ((int32_t)INT_MIN << 22) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 22) < 0,
         ((int32_t)0x000f << 22) == 0, ((int32_t)0x000f << 22) > 0,
         ((int32_t)0x000f << 22) < 0x000f, ((int32_t)0x000f << 22) == 0x000f,
         ((int32_t)0x000f << 22) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 22) < 0,
         ((int32_t)0xf000 << 22) == 0, ((int32_t)0xf000 << 22) > 0,
         ((int32_t)0xf000 << 22) < 0xf000, ((int32_t)0xf000 << 22) == 0xf000,
         ((int32_t)0xf000 << 22) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 22) < 0,
         ((int32_t)0xdeadbeef << 22) == 0, ((int32_t)0xdeadbeef << 22) > 0,
         ((int32_t)0xdeadbeef << 22) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 22) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 22) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 23) < 0, ((int32_t)0 << 23) == 0,
         ((int32_t)0 << 23) > 0, ((int32_t)0 << 23) < 0,
         ((int32_t)0 << 23) == 0, ((int32_t)0 << 23) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 23) < 0, ((int32_t)1 << 23) == 0,
         ((int32_t)1 << 23) > 0, ((int32_t)1 << 23) < 1,
         ((int32_t)1 << 23) == 1, ((int32_t)1 << 23) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 23) < 0, ((int32_t)-1 << 23) == 0,
         ((int32_t)-1 << 23) > 0, ((int32_t)-1 << 23) < -1,
         ((int32_t)-1 << 23) == -1, ((int32_t)-1 << 23) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 23) < 0,
         ((int32_t)INT_MAX << 23) == 0, ((int32_t)INT_MAX << 23) > 0,
         ((int32_t)INT_MAX << 23) < INT_MAX,
         ((int32_t)INT_MAX << 23) == INT_MAX,
         ((int32_t)INT_MAX << 23) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 23) < 0,
         ((int32_t)INT_MIN << 23) == 0, ((int32_t)INT_MIN << 23) > 0,
         ((int32_t)INT_MIN << 23) < INT_MIN,
         ((int32_t)INT_MIN << 23) == INT_MIN,
         ((int32_t)INT_MIN << 23) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 23) < 0,
         ((int32_t)0x000f << 23) == 0, ((int32_t)0x000f << 23) > 0,
         ((int32_t)0x000f << 23) < 0x000f, ((int32_t)0x000f << 23) == 0x000f,
         ((int32_t)0x000f << 23) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 23) < 0,
         ((int32_t)0xf000 << 23) == 0, ((int32_t)0xf000 << 23) > 0,
         ((int32_t)0xf000 << 23) < 0xf000, ((int32_t)0xf000 << 23) == 0xf000,
         ((int32_t)0xf000 << 23) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 23) < 0,
         ((int32_t)0xdeadbeef << 23) == 0, ((int32_t)0xdeadbeef << 23) > 0,
         ((int32_t)0xdeadbeef << 23) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 23) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 23) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 24) < 0, ((int32_t)0 << 24) == 0,
         ((int32_t)0 << 24) > 0, ((int32_t)0 << 24) < 0,
         ((int32_t)0 << 24) == 0, ((int32_t)0 << 24) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 24) < 0, ((int32_t)1 << 24) == 0,
         ((int32_t)1 << 24) > 0, ((int32_t)1 << 24) < 1,
         ((int32_t)1 << 24) == 1, ((int32_t)1 << 24) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 24) < 0, ((int32_t)-1 << 24) == 0,
         ((int32_t)-1 << 24) > 0, ((int32_t)-1 << 24) < -1,
         ((int32_t)-1 << 24) == -1, ((int32_t)-1 << 24) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 24) < 0,
         ((int32_t)INT_MAX << 24) == 0, ((int32_t)INT_MAX << 24) > 0,
         ((int32_t)INT_MAX << 24) < INT_MAX,
         ((int32_t)INT_MAX << 24) == INT_MAX,
         ((int32_t)INT_MAX << 24) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 24) < 0,
         ((int32_t)INT_MIN << 24) == 0, ((int32_t)INT_MIN << 24) > 0,
         ((int32_t)INT_MIN << 24) < INT_MIN,
         ((int32_t)INT_MIN << 24) == INT_MIN,
         ((int32_t)INT_MIN << 24) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 24) < 0,
         ((int32_t)0x000f << 24) == 0, ((int32_t)0x000f << 24) > 0,
         ((int32_t)0x000f << 24) < 0x000f, ((int32_t)0x000f << 24) == 0x000f,
         ((int32_t)0x000f << 24) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 24) < 0,
         ((int32_t)0xf000 << 24) == 0, ((int32_t)0xf000 << 24) > 0,
         ((int32_t)0xf000 << 24) < 0xf000, ((int32_t)0xf000 << 24) == 0xf000,
         ((int32_t)0xf000 << 24) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 24) < 0,
         ((int32_t)0xdeadbeef << 24) == 0, ((int32_t)0xdeadbeef << 24) > 0,
         ((int32_t)0xdeadbeef << 24) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 24) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 24) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 25) < 0, ((int32_t)0 << 25) == 0,
         ((int32_t)0 << 25) > 0, ((int32_t)0 << 25) < 0,
         ((int32_t)0 << 25) == 0, ((int32_t)0 << 25) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 25) < 0, ((int32_t)1 << 25) == 0,
         ((int32_t)1 << 25) > 0, ((int32_t)1 << 25) < 1,
         ((int32_t)1 << 25) == 1, ((int32_t)1 << 25) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 25) < 0, ((int32_t)-1 << 25) == 0,
         ((int32_t)-1 << 25) > 0, ((int32_t)-1 << 25) < -1,
         ((int32_t)-1 << 25) == -1, ((int32_t)-1 << 25) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 25) < 0,
         ((int32_t)INT_MAX << 25) == 0, ((int32_t)INT_MAX << 25) > 0,
         ((int32_t)INT_MAX << 25) < INT_MAX,
         ((int32_t)INT_MAX << 25) == INT_MAX,
         ((int32_t)INT_MAX << 25) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 25) < 0,
         ((int32_t)INT_MIN << 25) == 0, ((int32_t)INT_MIN << 25) > 0,
         ((int32_t)INT_MIN << 25) < INT_MIN,
         ((int32_t)INT_MIN << 25) == INT_MIN,
         ((int32_t)INT_MIN << 25) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 25) < 0,
         ((int32_t)0x000f << 25) == 0, ((int32_t)0x000f << 25) > 0,
         ((int32_t)0x000f << 25) < 0x000f, ((int32_t)0x000f << 25) == 0x000f,
         ((int32_t)0x000f << 25) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 25) < 0,
         ((int32_t)0xf000 << 25) == 0, ((int32_t)0xf000 << 25) > 0,
         ((int32_t)0xf000 << 25) < 0xf000, ((int32_t)0xf000 << 25) == 0xf000,
         ((int32_t)0xf000 << 25) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 25) < 0,
         ((int32_t)0xdeadbeef << 25) == 0, ((int32_t)0xdeadbeef << 25) > 0,
         ((int32_t)0xdeadbeef << 25) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 25) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 25) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 26) < 0, ((int32_t)0 << 26) == 0,
         ((int32_t)0 << 26) > 0, ((int32_t)0 << 26) < 0,
         ((int32_t)0 << 26) == 0, ((int32_t)0 << 26) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 26) < 0, ((int32_t)1 << 26) == 0,
         ((int32_t)1 << 26) > 0, ((int32_t)1 << 26) < 1,
         ((int32_t)1 << 26) == 1, ((int32_t)1 << 26) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 26) < 0, ((int32_t)-1 << 26) == 0,
         ((int32_t)-1 << 26) > 0, ((int32_t)-1 << 26) < -1,
         ((int32_t)-1 << 26) == -1, ((int32_t)-1 << 26) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 26) < 0,
         ((int32_t)INT_MAX << 26) == 0, ((int32_t)INT_MAX << 26) > 0,
         ((int32_t)INT_MAX << 26) < INT_MAX,
         ((int32_t)INT_MAX << 26) == INT_MAX,
         ((int32_t)INT_MAX << 26) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 26) < 0,
         ((int32_t)INT_MIN << 26) == 0, ((int32_t)INT_MIN << 26) > 0,
         ((int32_t)INT_MIN << 26) < INT_MIN,
         ((int32_t)INT_MIN << 26) == INT_MIN,
         ((int32_t)INT_MIN << 26) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 26) < 0,
         ((int32_t)0x000f << 26) == 0, ((int32_t)0x000f << 26) > 0,
         ((int32_t)0x000f << 26) < 0x000f, ((int32_t)0x000f << 26) == 0x000f,
         ((int32_t)0x000f << 26) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 26) < 0,
         ((int32_t)0xf000 << 26) == 0, ((int32_t)0xf000 << 26) > 0,
         ((int32_t)0xf000 << 26) < 0xf000, ((int32_t)0xf000 << 26) == 0xf000,
         ((int32_t)0xf000 << 26) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 26) < 0,
         ((int32_t)0xdeadbeef << 26) == 0, ((int32_t)0xdeadbeef << 26) > 0,
         ((int32_t)0xdeadbeef << 26) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 26) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 26) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 27) < 0, ((int32_t)0 << 27) == 0,
         ((int32_t)0 << 27) > 0, ((int32_t)0 << 27) < 0,
         ((int32_t)0 << 27) == 0, ((int32_t)0 << 27) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 27) < 0, ((int32_t)1 << 27) == 0,
         ((int32_t)1 << 27) > 0, ((int32_t)1 << 27) < 1,
         ((int32_t)1 << 27) == 1, ((int32_t)1 << 27) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 27) < 0, ((int32_t)-1 << 27) == 0,
         ((int32_t)-1 << 27) > 0, ((int32_t)-1 << 27) < -1,
         ((int32_t)-1 << 27) == -1, ((int32_t)-1 << 27) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 27) < 0,
         ((int32_t)INT_MAX << 27) == 0, ((int32_t)INT_MAX << 27) > 0,
         ((int32_t)INT_MAX << 27) < INT_MAX,
         ((int32_t)INT_MAX << 27) == INT_MAX,
         ((int32_t)INT_MAX << 27) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 27) < 0,
         ((int32_t)INT_MIN << 27) == 0, ((int32_t)INT_MIN << 27) > 0,
         ((int32_t)INT_MIN << 27) < INT_MIN,
         ((int32_t)INT_MIN << 27) == INT_MIN,
         ((int32_t)INT_MIN << 27) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 27) < 0,
         ((int32_t)0x000f << 27) == 0, ((int32_t)0x000f << 27) > 0,
         ((int32_t)0x000f << 27) < 0x000f, ((int32_t)0x000f << 27) == 0x000f,
         ((int32_t)0x000f << 27) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 27) < 0,
         ((int32_t)0xf000 << 27) == 0, ((int32_t)0xf000 << 27) > 0,
         ((int32_t)0xf000 << 27) < 0xf000, ((int32_t)0xf000 << 27) == 0xf000,
         ((int32_t)0xf000 << 27) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 27) < 0,
         ((int32_t)0xdeadbeef << 27) == 0, ((int32_t)0xdeadbeef << 27) > 0,
         ((int32_t)0xdeadbeef << 27) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 27) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 27) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 28) < 0, ((int32_t)0 << 28) == 0,
         ((int32_t)0 << 28) > 0, ((int32_t)0 << 28) < 0,
         ((int32_t)0 << 28) == 0, ((int32_t)0 << 28) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 28) < 0, ((int32_t)1 << 28) == 0,
         ((int32_t)1 << 28) > 0, ((int32_t)1 << 28) < 1,
         ((int32_t)1 << 28) == 1, ((int32_t)1 << 28) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 28) < 0, ((int32_t)-1 << 28) == 0,
         ((int32_t)-1 << 28) > 0, ((int32_t)-1 << 28) < -1,
         ((int32_t)-1 << 28) == -1, ((int32_t)-1 << 28) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 28) < 0,
         ((int32_t)INT_MAX << 28) == 0, ((int32_t)INT_MAX << 28) > 0,
         ((int32_t)INT_MAX << 28) < INT_MAX,
         ((int32_t)INT_MAX << 28) == INT_MAX,
         ((int32_t)INT_MAX << 28) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 28) < 0,
         ((int32_t)INT_MIN << 28) == 0, ((int32_t)INT_MIN << 28) > 0,
         ((int32_t)INT_MIN << 28) < INT_MIN,
         ((int32_t)INT_MIN << 28) == INT_MIN,
         ((int32_t)INT_MIN << 28) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 28) < 0,
         ((int32_t)0x000f << 28) == 0, ((int32_t)0x000f << 28) > 0,
         ((int32_t)0x000f << 28) < 0x000f, ((int32_t)0x000f << 28) == 0x000f,
         ((int32_t)0x000f << 28) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 28) < 0,
         ((int32_t)0xf000 << 28) == 0, ((int32_t)0xf000 << 28) > 0,
         ((int32_t)0xf000 << 28) < 0xf000, ((int32_t)0xf000 << 28) == 0xf000,
         ((int32_t)0xf000 << 28) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 28) < 0,
         ((int32_t)0xdeadbeef << 28) == 0, ((int32_t)0xdeadbeef << 28) > 0,
         ((int32_t)0xdeadbeef << 28) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 28) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 28) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 29) < 0, ((int32_t)0 << 29) == 0,
         ((int32_t)0 << 29) > 0, ((int32_t)0 << 29) < 0,
         ((int32_t)0 << 29) == 0, ((int32_t)0 << 29) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 29) < 0, ((int32_t)1 << 29) == 0,
         ((int32_t)1 << 29) > 0, ((int32_t)1 << 29) < 1,
         ((int32_t)1 << 29) == 1, ((int32_t)1 << 29) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 29) < 0, ((int32_t)-1 << 29) == 0,
         ((int32_t)-1 << 29) > 0, ((int32_t)-1 << 29) < -1,
         ((int32_t)-1 << 29) == -1, ((int32_t)-1 << 29) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 29) < 0,
         ((int32_t)INT_MAX << 29) == 0, ((int32_t)INT_MAX << 29) > 0,
         ((int32_t)INT_MAX << 29) < INT_MAX,
         ((int32_t)INT_MAX << 29) == INT_MAX,
         ((int32_t)INT_MAX << 29) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 29) < 0,
         ((int32_t)INT_MIN << 29) == 0, ((int32_t)INT_MIN << 29) > 0,
         ((int32_t)INT_MIN << 29) < INT_MIN,
         ((int32_t)INT_MIN << 29) == INT_MIN,
         ((int32_t)INT_MIN << 29) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 29) < 0,
         ((int32_t)0x000f << 29) == 0, ((int32_t)0x000f << 29) > 0,
         ((int32_t)0x000f << 29) < 0x000f, ((int32_t)0x000f << 29) == 0x000f,
         ((int32_t)0x000f << 29) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 29) < 0,
         ((int32_t)0xf000 << 29) == 0, ((int32_t)0xf000 << 29) > 0,
         ((int32_t)0xf000 << 29) < 0xf000, ((int32_t)0xf000 << 29) == 0xf000,
         ((int32_t)0xf000 << 29) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 29) < 0,
         ((int32_t)0xdeadbeef << 29) == 0, ((int32_t)0xdeadbeef << 29) > 0,
         ((int32_t)0xdeadbeef << 29) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 29) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 29) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 30) < 0, ((int32_t)0 << 30) == 0,
         ((int32_t)0 << 30) > 0, ((int32_t)0 << 30) < 0,
         ((int32_t)0 << 30) == 0, ((int32_t)0 << 30) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 30) < 0, ((int32_t)1 << 30) == 0,
         ((int32_t)1 << 30) > 0, ((int32_t)1 << 30) < 1,
         ((int32_t)1 << 30) == 1, ((int32_t)1 << 30) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 30) < 0, ((int32_t)-1 << 30) == 0,
         ((int32_t)-1 << 30) > 0, ((int32_t)-1 << 30) < -1,
         ((int32_t)-1 << 30) == -1, ((int32_t)-1 << 30) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 30) < 0,
         ((int32_t)INT_MAX << 30) == 0, ((int32_t)INT_MAX << 30) > 0,
         ((int32_t)INT_MAX << 30) < INT_MAX,
         ((int32_t)INT_MAX << 30) == INT_MAX,
         ((int32_t)INT_MAX << 30) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 30) < 0,
         ((int32_t)INT_MIN << 30) == 0, ((int32_t)INT_MIN << 30) > 0,
         ((int32_t)INT_MIN << 30) < INT_MIN,
         ((int32_t)INT_MIN << 30) == INT_MIN,
         ((int32_t)INT_MIN << 30) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 30) < 0,
         ((int32_t)0x000f << 30) == 0, ((int32_t)0x000f << 30) > 0,
         ((int32_t)0x000f << 30) < 0x000f, ((int32_t)0x000f << 30) == 0x000f,
         ((int32_t)0x000f << 30) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 30) < 0,
         ((int32_t)0xf000 << 30) == 0, ((int32_t)0xf000 << 30) > 0,
         ((int32_t)0xf000 << 30) < 0xf000, ((int32_t)0xf000 << 30) == 0xf000,
         ((int32_t)0xf000 << 30) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 30) < 0,
         ((int32_t)0xdeadbeef << 30) == 0, ((int32_t)0xdeadbeef << 30) > 0,
         ((int32_t)0xdeadbeef << 30) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 30) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 30) > 0xdeadbeef);
  printf("\n");
  printf("%d%d%d%d%d%d", ((int32_t)0 << 31) < 0, ((int32_t)0 << 31) == 0,
         ((int32_t)0 << 31) > 0, ((int32_t)0 << 31) < 0,
         ((int32_t)0 << 31) == 0, ((int32_t)0 << 31) > 0);
  printf("%d%d%d%d%d%d", ((int32_t)1 << 31) < 0, ((int32_t)1 << 31) == 0,
         ((int32_t)1 << 31) > 0, ((int32_t)1 << 31) < 1,
         ((int32_t)1 << 31) == 1, ((int32_t)1 << 31) > 1);
  printf("%d%d%d%d%d%d", ((int32_t)-1 << 31) < 0, ((int32_t)-1 << 31) == 0,
         ((int32_t)-1 << 31) > 0, ((int32_t)-1 << 31) < -1,
         ((int32_t)-1 << 31) == -1, ((int32_t)-1 << 31) > -1);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MAX << 31) < 0,
         ((int32_t)INT_MAX << 31) == 0, ((int32_t)INT_MAX << 31) > 0,
         ((int32_t)INT_MAX << 31) < INT_MAX,
         ((int32_t)INT_MAX << 31) == INT_MAX,
         ((int32_t)INT_MAX << 31) > INT_MAX);
  printf("%d%d%d%d%d%d", ((int32_t)INT_MIN << 31) < 0,
         ((int32_t)INT_MIN << 31) == 0, ((int32_t)INT_MIN << 31) > 0,
         ((int32_t)INT_MIN << 31) < INT_MIN,
         ((int32_t)INT_MIN << 31) == INT_MIN,
         ((int32_t)INT_MIN << 31) > INT_MIN);
  printf("%d%d%d%d%d%d", ((int32_t)0x000f << 31) < 0,
         ((int32_t)0x000f << 31) == 0, ((int32_t)0x000f << 31) > 0,
         ((int32_t)0x000f << 31) < 0x000f, ((int32_t)0x000f << 31) == 0x000f,
         ((int32_t)0x000f << 31) > 0x000f);
  printf("%d%d%d%d%d%d", ((int32_t)0xf000 << 31) < 0,
         ((int32_t)0xf000 << 31) == 0, ((int32_t)0xf000 << 31) > 0,
         ((int32_t)0xf000 << 31) < 0xf000, ((int32_t)0xf000 << 31) == 0xf000,
         ((int32_t)0xf000 << 31) > 0xf000);
  printf("%d%d%d%d%d%d", ((int32_t)0xdeadbeef << 31) < 0,
         ((int32_t)0xdeadbeef << 31) == 0, ((int32_t)0xdeadbeef << 31) > 0,
         ((int32_t)0xdeadbeef << 31) < 0xdeadbeef,
         ((int32_t)0xdeadbeef << 31) == 0xdeadbeef,
         ((int32_t)0xdeadbeef << 31) > 0xdeadbeef);
  printf("\n");
  return 0;
}
