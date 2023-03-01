#include "main.h"
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
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + 1] = src[i];

	dest[dest_len + 1] = '\0';

	return (dest);
}
