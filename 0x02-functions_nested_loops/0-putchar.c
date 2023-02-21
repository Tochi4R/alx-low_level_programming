#include "_putchar.h"
/**
 * main - Entry point for the program
 *
 * Description: This function is the entry point for the program and
 *
 * Return:      Returns 0
 *
 */
int main(void)
{
	char a = "_putchar";

	while (a)
	{
		putchar(a);
		a++;
	}
	putchar("\n");
	return (0);
}
