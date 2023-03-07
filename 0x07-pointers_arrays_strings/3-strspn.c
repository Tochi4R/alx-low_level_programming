#include "main.h"
#include <stdio.h>
/**
 * _strspn - A function that gets the lenght of a prefix substrings
 *
 * @s: input
 *
 * @accept: input
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && *accept != '\0' && *s == *accept)
	{
		count++;
		s++;
		accept++;
	}
	return (count);
}
