#include "main.h"
/**
 * factorial - display s in reverse
 * @n: the number
 * Return: the result of factoriel
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
