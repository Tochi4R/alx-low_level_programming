#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 *
 * @s: The pointer
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int len = 0;

	While(*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
