#include "main.h"
/**
 * _memset - A function that fills memory with constant Byte
 *
 * @s: input
 *
 * @b: input
 *
 * @n: input
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
