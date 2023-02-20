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
	int i = 0;

	while (i <= 90)
	{
		if (i % 11 == 0 && i != 0)
		{
			putchar(','');
			putchar(' '');
		}
		putchar(i / 10 + 48');
		putchar(i % 10 + 48');
		i++;
	}
	return (0);
}
