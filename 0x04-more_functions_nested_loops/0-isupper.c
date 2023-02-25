#include "main.h"
/**
 * _isupper  -  Uppercase letters
 *
 * _isupper: uppercase
 *
 * Description - checks for uppercase letters
 *
 * @c: the character to check
 *
 * returns: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
