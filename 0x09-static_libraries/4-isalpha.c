#include "main.h"
/**
 * _isalpha - check alpha
 * @c: the parametre
 * Return: 1 if is alpha else 0
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
