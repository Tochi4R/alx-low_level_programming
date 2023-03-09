#include "main.h"
/**
 * _sqrt_recursion - A function that returns natural square root
 * of a number
 *
 * @n: input
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int root = _sqrt_recursion(n / 4) * 2;

		if ((root + 1) * (root + 1) <= n && (root + 1) > root)
		{
			return (root + 1);
		}
		else if (root * root <= n && root > 0)
		{return (root);
		}
		else
		{
			return (-1);
		}
	}
}
