#include "main.h"
/**
 * check_if_has_multipliers - look for multipliers of n
 * @n: number
 * @i: index
 * Return: 1 if n is prime, 0 otherwise
 */
int check_if_has_multipliers(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (check_if_has_multipliers(n, i + 1));
}
/**
 * is_prime_number - check if n is prime
 * @n: number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_if_has_multipliers(n, 2));
}
