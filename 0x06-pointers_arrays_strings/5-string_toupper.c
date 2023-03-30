#include "main.h"

/**
 * string_toupper - string converted to uppercase
 * @s: string
 *
 * Return: string converted to uppercase.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		i++;
	}
	return (s);
}
