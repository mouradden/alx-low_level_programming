#include "main.h"

/**
 * cap_string - string converted to uppercase
 * @str: string
 *
 * Return: string converted to capitalized first lettres.
 */
char *cap_string(char *str)
{
	int i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '}' ||
			str[i - 1] == '{') && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
