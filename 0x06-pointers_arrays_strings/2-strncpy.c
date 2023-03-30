#include "main.h"
/**
 * _strncpy - copy from src to dst
 * @dest: parametre
 * @src: parametre
 * @n: parametre
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
