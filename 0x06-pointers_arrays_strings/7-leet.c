#include "main.h"
/**
 * leet - A letter that encode a string
 *
 * @str: input
 *
 * Return: str
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *replacements = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (letters[j] == str[i])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}
	return (str);
}
