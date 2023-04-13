#include "main.h"
/**
 * string_nconcat - concat s2 to s1
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to add from s2 to s1
 * Return: the pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i,j, len1, len2;

	len1 = 0;
	len2 = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while(s1[len1])
		len1++;
	while(s2[len2])
		len2++;
	if (!(n >= len2))
		len2 = n;
	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
