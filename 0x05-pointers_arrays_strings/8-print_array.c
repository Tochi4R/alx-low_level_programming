#include "main.h"
/**
 * print_array - A function that prints n element of an array
 * of integers followed by new line
 *
 * @n: The number of element of the aray to be printed
 *
 * @a: input
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
