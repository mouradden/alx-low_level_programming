#include "main.h"
/**
* print_to_98 - print numbers to 98
* @n: parametre
*/
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i <= 9)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i <= 9)
				_putchar(i + '0');
			else if (i >= 10 && i <= 99)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i / 100 + '0');
				i /= 10;
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}