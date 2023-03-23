#include "main.h"
/**
 * _isdigit - check is digit
 * @c: the parametre
 * Return: 1 if is digit else 0
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
