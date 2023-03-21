#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the parametre
 * Return: last digit of a number, means n%10
 */
int print_last_digit(int n)
{
	int modulo;

	modulo = n % 10;
	if (modulo < 0)
		modulo *= -1;
	_putchar(modulo + '0');
	return (modulo);
}
