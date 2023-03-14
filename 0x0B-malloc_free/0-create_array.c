#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that create an array of char
 * and initialize it with a specific char
 *
 * @size: input
 *
 * @c: input
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
