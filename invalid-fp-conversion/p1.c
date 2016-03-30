#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv) {
  float x = 5.0f / 0.0f;
  int32_t ix = (int32_t) x;

  if (ix == 0) {
    printf("ix is 0\n");
  }

  if (ix != 0) {
    printf("ix is not 0\n");
  }
}
