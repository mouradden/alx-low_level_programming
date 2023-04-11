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
	while (str[len])
		len++;
	dst = (char *) malloc (len * sizeof(char) + 1);
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
