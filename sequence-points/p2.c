#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	unsigned int x = 15;
	unsigned int y = 25;
	unsigned result = 0;

	/* programmer assumes left to right evaluation,
	   even with unary ops mixed in */
	/* 16 + 15 + (50 * 50) + 50 + 15 */
	result = x = y = x++ + x-- + (y*=2 * y) + y + x ;

	printf("result %d\n", result );

	return EXIT_SUCCESS;
}
