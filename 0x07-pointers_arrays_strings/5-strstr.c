#include "main.h"
/**
 * _strstr - look for needle
 * @haystack: the string where we have to search for needle
 * @needle: the string to find
 * Return: starting from the identification or null if none
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	if (needle[0] == '\0')
		return (str);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			++j;
		}
		++i;
	}
	return (0);
}
