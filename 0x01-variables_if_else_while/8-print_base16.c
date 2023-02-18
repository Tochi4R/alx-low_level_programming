#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Description: This function is the entry point for the program and
 *              is responsible for running the program's main logic.
 *
 * Return:      Returns an integer indicating the exit status of the program
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 0; i <= 16; i++)
	{
		putchar(i + 10 + 'a');
	}
	putchar('\n');
	return (0);
}
