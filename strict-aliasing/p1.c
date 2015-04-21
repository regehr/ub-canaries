#include <stdio.h>

int main(void) {
  int x = 10;
  double *p = (double *)&x;
  *p = 1.0;
  printf("%d\n", x);
  return 0;
}
