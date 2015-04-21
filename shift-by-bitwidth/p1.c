#include <stdio.h>
#include <stdint.h>

int32_t rol(int32_t x, int i) {
  return (x<<i) | (x>>(32-i));
}

int32_t ror(int32_t x, int i) {
  return (x>>i) | (x<<(32-i));
}

uint64_t s[2];

uint64_t rand_xorshift(void) {
  uint64_t s1 = s[0];
  const uint64_t s0 = s[1];
  s[0] = s0;
  s1 ^= s1 << 23;
  return (s[1] = (s1 ^ s0 ^ (s1 >> 17) ^ (s0 >> 26))) + s0;
}

int main(void) {
  s[0] = 333;
  s[1] = 444;
  int i;
  for (i=0; i<32; i++) {
    printf("%x %x ", rol(0xdeadbeef, i), ror(0xdeadbeef, i));
    printf("%x %x ", rol(0x1, i), ror(0x1, i));
  }
  printf("\n");
  for (i=0; i<100; i++) {
    int32_t x = rand_xorshift();
    printf("%x %x ", rol(x, 0), ror(x, 0));
    printf("%x %x ", rol(x, 32), ror(x, 32));
  }
  printf("\n");
  for (i=0; i<100; i++) {
    int32_t x = rand_xorshift();
    int amt = rand_xorshift() % 33;
    printf("%x %x ", rol(x, amt), ror(x, amt));
    printf("%x %x ", rol(x, amt), ror(x, amt));
  }
  printf("\n");
  printf("%x %x ", rol(0xdeadbeef, 0), rol(0xdeadbeef, 32));
  printf("%x %x ", ror(0xdeadbeef, 0), ror(0xdeadbeef, 32));
  printf("\n");
  return 0;
}
