#include "main.h"
/**
 * puts2 - Prints every other character of a string
 *
 * @str: string
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *s = str;
	int o;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	t = len - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
