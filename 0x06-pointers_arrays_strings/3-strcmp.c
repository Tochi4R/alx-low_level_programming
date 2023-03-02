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
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return 0;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
