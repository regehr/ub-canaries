#include <stdio.h>
#include <limits.h>

int main(void) {
  printf("%d\n", INT_MIN % -1);
  volatile int i = INT_MIN;
  volatile int j = -1;
  printf("%d\n", i % j);
  return 0;
}
