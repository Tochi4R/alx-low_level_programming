#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - A function that search a string for any of a set of Byte
 *
 * @s: input
 *
 * @accept: input
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
