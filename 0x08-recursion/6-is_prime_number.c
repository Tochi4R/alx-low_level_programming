#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - A funtion that returns 1 if the input integer
 * is a prime number, otherwise returns 0
 *
 * @n: input
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}

	int i;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
