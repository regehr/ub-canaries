#include <stdio.h>

struct s {
    int a;
};

int main(int argc, char** argv)
{
    static struct s* f;
    if (&(f->a)) {
        printf("f is not NULL\n");
    }
    if (!&(f->a)) {
        printf("f is NULL\n");
    }
    return 0;
}
