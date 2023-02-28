#include "main.h"
/**
 * rev_string - A fubtion that reverse a string
 *
 * @s: string
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
