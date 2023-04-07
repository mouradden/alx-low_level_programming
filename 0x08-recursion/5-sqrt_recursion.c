#include "main.h"
/**
 * square_root - find the square root
 * @n: number
 * @i: index
 * Return: i
 */
int square_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (square_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - calculates the square root of n.
 * @n: number.
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square_root(n, 2));
}
