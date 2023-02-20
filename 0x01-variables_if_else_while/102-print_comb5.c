#include <stdio.h>
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
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
