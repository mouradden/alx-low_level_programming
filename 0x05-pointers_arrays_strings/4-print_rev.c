#include "main.h"
/**
 * print_rev - reverse   string
 * @s: the string
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
