#include "main.h"
/**
 * _islower - check alpha
 *
 * Return: 1 if is alpha else 0
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}