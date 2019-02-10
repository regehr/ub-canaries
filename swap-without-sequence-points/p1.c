#define xsw(a,b) a^=b^=a^=b

void swap(unsigned x[]) {
  xsw(x[0], x[1]);
}
