#include "main.h"
/**
 * print_numbers - print numbers
 * @n: parametre
 */
void print_number(int n)
{
	int	i;

	if (n >= 0 && n <= 9)
		_putchar(i + '0');
	else if (n < 0)
	{
		n *= -1;
		print_number(n);
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	_putchar('\n');
}