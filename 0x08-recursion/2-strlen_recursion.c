#include "main.h"
/**
 * _print_rev_recursion - display s in reverse
 * @s: the string
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (s[0])
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
