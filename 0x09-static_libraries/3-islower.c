#include "main.h"
/**
 * _islower - check lowercase
 * @c: the parametre
 * Return: 1 if is lowercase else 0
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
