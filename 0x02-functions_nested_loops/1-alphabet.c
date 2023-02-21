#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */

void print_alphabet(void)
{
	char letter = 'a'

	for (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
