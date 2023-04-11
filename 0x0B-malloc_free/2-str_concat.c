#include "main.h"
/**
 * str_concat - allocate to string and concatenate s1 with s2
 * @s1: the first string
 * @s2: the second string
 * Return: the pointer to the string result
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	char *res;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		j++;
	res = malloc(i + j + 1);
	j = 0;
	i = 0;
	while (src[j] != '\0')
	{
		res[i] = src[j];
		i++;
		j++;
	}
	j = 0;
	while (dst[j] != '\0')
	{
		res[i] = dst[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
