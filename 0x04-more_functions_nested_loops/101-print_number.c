#include "main.h"
/**
 * print_numbers - print numbers
 * @n: parametre
 */
void print_number(int n)
{
	if (n = -2147483648)
	{
		_putchar('-');
		print_number(2);
		print_number(147483648);
	}
	else if (n >= 0 && n <= 9)
		_putchar(n + '0');
	else if (n < 0)
	{
		n *= -1;
		_putchar('-');
		print_number(n);
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
