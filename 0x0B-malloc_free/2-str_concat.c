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
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (S2[j] != '\0')
		j++;
	res = malloc(i + j + 1);
	j = 0;
	i = 0;
	while (s1[j] != '\0')
	{
		res[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
