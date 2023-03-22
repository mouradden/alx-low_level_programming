#include "main.h"
/**
* print_to_98 - print numbers to 98
* @n: parametre
*/
void print_to_98(int n)
{
	int i;

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
}