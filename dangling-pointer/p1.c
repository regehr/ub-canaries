// from http://trust-in-soft.com/dangling-pointer-indeterminate/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>

char s1[255], s2[255], s3[255], s4[255];

int main(int argc, char *argv[]) {
  char *p, *q;
  uintptr_t pv, qv;
  {
    char a = 3;
    p = &a;
    pv = (uintptr_t)p;
  }
  {
    char b = 4;
    q = &b;
    qv = (uintptr_t)q;
  }
  printf("Roses are red,\nViolets are blue\n");
  if (p != q) {
    sprintf(s1, "%p", (void *)p);
    sprintf(s2, "%p", (void *)q);
    sprintf(s3, "%" PRIxPTR, (uintptr_t)p);
    sprintf(s4, "%" PRIxPTR, (uintptr_t)q);
    if (strcmp(s1, s2) == 0 || strcmp(s3, s4) == 0)
      printf("We have entered the twilight zone\n");
  }
  return 0;
}
