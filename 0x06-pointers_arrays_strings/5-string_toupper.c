#include "main.h"
/**
 * string_toupper - A function that changes all lower case letter
 * of a string to uppercase
 *
 * @str: inpute
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}
