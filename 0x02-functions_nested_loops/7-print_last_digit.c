#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the parametre
 * Return: last digit of a number, means n%10
 */
int print_last_digit(int n)
{
	_putchar(n%10 + '0');
	return (n%10);
}