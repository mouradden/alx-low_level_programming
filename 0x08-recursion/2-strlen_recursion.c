#include "main.h"
/**
 * _print_rev_recursion - display s in reverse
 * @s: the string
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
