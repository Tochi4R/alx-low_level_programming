#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Description: This function takes an integer n as input and prints it to the
 * standard output using the _putchar function. It does not use any other
 * libraries or data types such as long or arrays. If n is negative, a minus
 * sign is printed first. The function uses recursion to print the digits of n
 * in reverse order, starting from the least significant digit.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
