#include "main.h"
/**
 * reverse_array - A function that reverse the content of an array of integer
 *
 * @n: input
 *
 * @a: input
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
