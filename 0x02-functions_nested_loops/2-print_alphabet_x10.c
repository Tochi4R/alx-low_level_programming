#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
    char letter = 'a';
    int i;
    
    for (i = 0; i < 10; i++) {
        while (letter <= 'z') {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
        letter = 'a';
    }
}
