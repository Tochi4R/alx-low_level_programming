#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed
 * or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer = malloc(sizeof(char) * (letters + 1));
	ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);

	if (filename == NULL)
	{
		return (0);
	}
	if (file == NULL)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	if (bytes_read == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	buffer[bytes_read] = '\0';
	if (write(STDOUT_FILENO, buffer, bytes_read) == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytes_read);
}
