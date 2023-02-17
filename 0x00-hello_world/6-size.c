#include <stdio.h>
/**
 * main - Entry
 *
 * Description: print various types on the computer it is compiled
 *
 * Return: Always 0
 */
int main(void)
{
	printf(stderr, "size of a char: %i byte(s)\n", sizeof(char));
	printf(stderr, "size of an int: %i byte(s)\n", sizeof(int));
	printf(stderr, "size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf(stderr, "size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
