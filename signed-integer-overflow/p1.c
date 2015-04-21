#include <stdio.h>
#include <limits.h>

int main(void) {
  printf("%d\n", INT_MAX + 1);
  printf("%d\n", INT_MIN - 1);
  printf("%d\n", INT_MIN * INT_MIN);
  printf("%d\n", INT_MIN * INT_MAX);
  return 0;
}
