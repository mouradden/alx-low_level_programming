#include "main.h"
/**
 * _strchr - look for c in s, starting from the beginning
 * @s: the string where we have to search for c
 * @c: the caractere to find
 * Return: the string starting by c
 */
char *_strchr(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
			return ((char *)s + i);
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}
