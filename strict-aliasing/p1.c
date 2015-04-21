// http://blog.regehr.org/archives/959

#include <stdio.h>

void check(int *h, long *k) {
  *h = 5;
  *k = 6;
  printf("%d\n", *h);
}

int main(void) {
  long k;
  check((int *)&k, &k);
  return 0;
}
