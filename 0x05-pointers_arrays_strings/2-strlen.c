#include "main.h"
/**
 * _strlen - lentgh of a string
 * @s: the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
