// this is from Alexander Monakov

#include <stdio.h>

#define N 32

int a[N], pfx[N];

int prefix_sum(void) {
  int i, accum;
  for (i = 0, accum = a[0]; i < N && accum >= 0; i++, accum += a[i])
    pfx[i] = accum;
  return accum;
}

int main(void) {
  printf("%d\n", prefix_sum());
  return 0;
}
