#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, j;

	i = sizeof(unsigned long int) * 8 - 1;

	while (i >= 0)
	{
		j = n >> i;
		if (j & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
