#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = sizeof(unsigned long int) * 8 - 1;
	int i, bit;

	for (i = len; i >= 0; i--)
	{
		bit = (n >> i) & mask;
		_putchar(bit + '0');
	}
}
