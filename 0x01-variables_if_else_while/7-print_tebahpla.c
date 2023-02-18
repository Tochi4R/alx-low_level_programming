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

	for (i = 122; i <= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
