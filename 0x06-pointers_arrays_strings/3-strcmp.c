#include "main.h"
/**
 * _strcmp - A function that compares two strings
 *
 * @s1: input
 *
 * @s2: input
 *
 * return: void
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		*s1++;
		*s2++;
	}
	return ((*s1 == *s2) ? 0 : (*s1 < *s2) ? : -1 : 1);
}
