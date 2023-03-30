#include "main.h"

/**
 * leet - string
 * @str: string
 * Return: string converted
 */
char *leet(char *str)
{
	int i;
	int j;
	char lettres[11] = "aAeEoOtTlL";
	char to_covert_to[6] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lettres[j] != '\0'; j++)
			if (str[i] == lettres[j])
				str[i] = to_covert_to[j / 2];
	}
	return (str);
}
