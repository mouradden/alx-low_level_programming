#include "main.h"
/**
 * _strspn - look for accept
 * @s: the string where we have to search for accept
 * @accept: the string to find
 * Return: how many bytes before finding the first identification
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int    count;

	count = 0;
	while (*s)
	{
		if (ft_strchr(accept, *s))
			count++;
		else
			break;
		s++;
	}
	return (count);
}
