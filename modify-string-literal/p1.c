#include <stdio.h>
#include <string.h>

int main(void) {
  char *string = "The quick brown fox";
  memcpy(&string[4], "slow ", 5);
  printf("%s\n", string);
  return 0;
}
