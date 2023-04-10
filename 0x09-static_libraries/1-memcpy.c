#include "main.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @src: the string source
 * @dest: the string destination
 * @n: how many bytes to copy
 * Return: the new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char	*s;

	s = (char *)dest;
	i = 0;
	while (i < n)
	{
		*(char *)s = *(char *)src;
		s++;
		src++;
		i++;
	}
	return (dest);
}
