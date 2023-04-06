#include "main.h"
/**
 * _puts_recursion - display "Puts with recursion"
 * @s: the string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
