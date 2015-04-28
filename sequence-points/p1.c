#include <stdio.h>
#include <stdlib.h>


/* comments say what the programmer would expect */

const int nums[32] = {1, 2, 3, 4, 5, 6, 7, 8,
		      9, 10, 11, 12, 13, 14,
		      15, 16, 17, 18, 19, 20,
		      21, 22, 23, 24, 25, 26,
		      27, 28, 29, 30, 31, 32 };

int main(void) {

	int index = 0;

	index = nums[index++]; //index = nums[0]; index++; -> index = 2;
	index = nums[index++]; //index = nums[2]; index++; -> index = 4;
	index = nums[index++]; //index = nums[4]; index++; -> index = 6;
	index = nums[index++]; //index = nums[6]; index++; -> index = 8;
	index = nums[index++]; //index = nums[8]; index++; -> index = 10;
	index = nums[index++]; //index = nums[10]; index++; -> index = 12;
	printf("index is %d\n", index);

	return EXIT_SUCCESS;
}
