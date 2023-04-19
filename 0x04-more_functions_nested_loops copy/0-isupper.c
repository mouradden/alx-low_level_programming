#include "main.h"
/**
 * _isupper - check uppercase
 * @c: the parametre
 * Return: 1 if is uppercase else 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
