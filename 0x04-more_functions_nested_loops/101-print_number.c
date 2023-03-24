#include "main.h"
/**
 * print_numbers - print numbers
 * @n: parametre
 */
void print_number(int n)
{
	unsigned int nb;

	nb = n;
	if (nb >= 0 && nb <= 9)
		_putchar(nb + '0');
	else if (nb < 0)
	{
		nb *= -1;
		_putchar('-');
		print_number(nb);
	}
	else
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
}
