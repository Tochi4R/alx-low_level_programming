#include "main.h"
/**
 * mul - multiplies two integers
 * @a: the first integer to be multiplied
 * @b: the second integer to be multiplied
 * Return: the product of @a and @b
 */
int mul(int a, int b)
{
	int product = a * b;
	int sign = 1;

	if (product < 0)
	{
		sign = -1;
		product = -product;
	}
	if (product == 0)
	{
		_putchar('0');
		return (0);
	}

	int digits[10];
	int num_digits = 0;

	while (product > 0)
	{
		digits[num_digits] = product % 10;
		product /= 10;
		num_digits++;
	}
	if (sign == -1)
	{
		_putchar('-');
	}
	for (int i = num_digits - 1; i >= 0; i--)
	{
		_putchar(digits[i] + '0');
	}
	return (a * b);
}
