#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatinate two values
 *
 * @src: input
 *
 * @n: input
 *
 * @dest: inpute
 *
 * Return: A pointer to the returning string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
