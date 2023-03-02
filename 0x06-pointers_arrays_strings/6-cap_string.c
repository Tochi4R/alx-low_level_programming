#include "main.h"
/**
 * cap_string - A function that capitalize all words of a string
 *
 * @s: input
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || isspace(s[i - 1]) ||
				s[i - 1] == ',' || s[i - 1] == ';' ||
				s[i - 1] == '.' || s[i - 1] == '!' ||
				s[i - 1] == '?' || s[i - 1] == '"' ||
				s[i - 1] == '(' || s[i - 1] == ')' ||
				s[i - 1] == '{' || s[i - 1] == '}')
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
