include "main.h"
/**
 * main - Entry point for the program
 *
 * Description: Write a function that prints the alphabet, in lowercase, followed by a new line
 *
 * Return:      Returns 0
 */
void print_alphabet(void)
{
	char lowercase = 'a'

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
