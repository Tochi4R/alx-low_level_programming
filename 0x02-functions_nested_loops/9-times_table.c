#include "main.h"
/**
 * times_table - A function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
			product = i * j;
		if (product < 10)
		{
			_putchar(product + '0');
		}
		else
		{
			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
		}
		if (j != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}
