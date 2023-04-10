#include "main.h"
/**
 * _strlen - lentgh of a string
 * @s: the string
 * Return: lentgh
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
