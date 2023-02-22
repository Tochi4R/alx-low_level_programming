#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + '0');
}
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_number(i);
			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
