#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for the program
 *
 * Description: This function is the entry point for the program and
 *              is responsible for running the program's main logic.
 *
 * Return:      Returns an integer indicating the exit status of the program.
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
		printf("the last digit of %d is %d\n", n, x);
	if (x > 5)
		printf("and its greater than 5\n");
	if (x == 0)
		printf("and is 0\n");
	if (x < 6 && != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
