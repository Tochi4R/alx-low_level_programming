#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * This function multiplies two numbers and prints the result to stdout.
 * If the program is not invoked with exactly two integer arguments, an error
 * message is printed to stderr and the program exits with a non-zero status.
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
