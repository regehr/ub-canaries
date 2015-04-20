#include <stdio.h>
#include <stdint.h>
#include <limits.h>

struct s {
    uint8_t a;
    uint8_t b;
};

static struct s* f;

void foo(void)
{
    if (&(f->b) != 1) {
        printf("f is not NULL\n");
    }
    if (&(f->b) == 1) {
        printf("f is NULL\n");
    }
}

int main(int argc, char** argv)
{
    if (argc == INT_MAX) {
        static struct s a;
        f = &a;
    }
    foo();
    return 0;
}
