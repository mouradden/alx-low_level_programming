#include "main.h"
/**
 * _memset - fill s by b, n bytes
 * @s: the string
 * @b: the caractere
 * @n: how many bytes to put b in s
 * Return: the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str;

	str = s;
	while (n)
	{
		*str = (unsigned char)b;
		str++;
		n--;
	}
	return (s);
}
