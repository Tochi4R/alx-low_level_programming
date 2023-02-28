#include "main.h"
/**
 * swap_int - A function that swaps the value of two integers
 *
 * @a: intigers to be swap
 *
 * @b: integer to be swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
