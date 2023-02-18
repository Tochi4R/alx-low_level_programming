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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
