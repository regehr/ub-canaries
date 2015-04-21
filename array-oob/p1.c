// from http://blog.regehr.org/archives/767

#include <stdio.h>

enum { N = 32 };

int a[N], pfx[N];

int prefix_sum(void) {
  int i, accum;
  for (i = 0, accum = a[0]; i < N; i++, accum += a[i])
    pfx[i] = accum;
  return accum;
}

int main(void) {
  printf("%d\n", prefix_sum());
  return 0;
}
