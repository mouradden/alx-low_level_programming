#include "main.h"
/**
 * print_rev - reverse   string
 * @s: the string
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
