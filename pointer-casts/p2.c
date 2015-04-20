#include <stdio.h>
#include <stdlib.h>

volatile int a;

int main(void)
{
	int *ptr;
	a = 30;
	ptr = (int *) &a;
	*ptr += 5;
	printf("var is %d\n", a);
	return EXIT_SUCCESS;
}
