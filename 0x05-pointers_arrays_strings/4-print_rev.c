#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 *
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
