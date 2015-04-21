#include <stdio.h>
#include <stdlib.h>
/* Casting away consts */

int main(void) {
  const int ten = 10;
  int *p = (int *)&ten;
  *p = 20;
  printf("var is %d\n", ten);
  return EXIT_SUCCESS;
}
