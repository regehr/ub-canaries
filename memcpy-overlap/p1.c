#include <string.h>
#include <stdio.h>
#include <stdint.h>

uint64_t s[2];

uint64_t rand_xorshift(void) {
  uint64_t s1 = s[0];
  const uint64_t s0 = s[1];
  s[0] = s0;
  s1 ^= s1 << 23;
  return (s[1] = (s1 ^ s0 ^ (s1 >> 17) ^ (s0 >> 26))) + s0;
}

int min(int x, int y) {
  if (x < y)
    return x;
  return y;
}

#define SIZE 4096

int main(void) {
  s[0] = 666;
  s[1] = 777;
  unsigned char buf[SIZE];
  int i;
  for (i = 0; i < SIZE; i++)
    buf[i] = i;
  for (i = 0; i < 1000; i++) {
    int src = rand_xorshift() % SIZE;
    int dst = rand_xorshift() % SIZE;
    int len = rand_xorshift() % SIZE;
    len = min(len, SIZE - src);
    len = min(len, SIZE - dst);
    memcpy(buf + dst, buf + src, len);
  }
  for (i = 0; i < SIZE; i++)
    printf("%d ", buf[i]);
}
