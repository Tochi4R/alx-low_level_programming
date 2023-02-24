#include "main.h"
/**
 * print_line - draws a straight line of _ characters in the terminal
 * @n: the number of times the _ character should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
