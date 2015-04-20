#include <stdio.h>
#include <limits.h>

int x1(int x) {
  return (x+1)>x;
}

int x2(int x) {
  return (x-1)>x;
}

int x3(int x) {
  return (x+1)<x;
}

int x4(int x) {
  return (x-1)<x;
}

int main(void) {
  printf("%d %d %d %d\n", x1(INT_MAX), x2(INT_MAX), x3(INT_MAX), x4(INT_MAX));
  printf("%d %d %d %d\n", x1(INT_MIN), x2(INT_MIN), x3(INT_MIN), x4(INT_MIN));
  return 0;
}
