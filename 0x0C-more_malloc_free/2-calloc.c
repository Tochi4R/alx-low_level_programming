#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - fills memory with a constant byte
 *
 * @nmemb: input
 *
 * @size: input
 *
 * Return: pointer to the memory area s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
