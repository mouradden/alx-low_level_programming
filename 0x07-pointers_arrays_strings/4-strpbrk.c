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
	unsigned int len;

	while (accept[len])
		len++;
	while (*s)
	{
		i = 0;
		while (i < len)
		{
			if (accept[i] == *s)
				return ((char*)s);
			i++;
		}
		s++;
	}
	return (NULL);
}
