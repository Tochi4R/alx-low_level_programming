#include "main.h"
/**
 * _strchr - A funtion that gets the lenght of a prefix substring
 *
 * @s: input
 *
 * @c: input
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
