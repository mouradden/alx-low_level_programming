#include "main.h"
/**
 * _strpbrk - look for accept
 * @s: the string where we have to search for accept
 * @accept: the string to find
 * Return: from the first identification in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
