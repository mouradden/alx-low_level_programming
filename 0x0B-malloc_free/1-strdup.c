#include "main.h"
/**
 * _strdup - allocate to string and return a pointer it
 * @str: string
 * Return: the pointer to the string
 */
char *_strdup(char *str)
{
	char	*dst;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (!str)
		return (NULL);
	while (str[len])
		len++;
	dst = malloc (len * sizeof(char) + 1);s
	if (!dst)
		return (NULL);
	while (str[i] != '\0')
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
