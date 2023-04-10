#include "main.h"
/**
 * _strspn - look for accept
 * @s: the string where we have to search for accept
 * @accept: the string to find
 * Return: how many bytes before finding the first identification
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count;

	count = 0;
	while (s[count] != '\0')
	{
		i = 0;
		while (accept[i] != '\0' && s[count] != accept[i])
			i++;
		if (accept[i] == '\0')
			return (count);
		count++;
	}
	return (count);
}
