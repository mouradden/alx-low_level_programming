#include "main.h"
/**
 * times_table - Prints the 9 times table, starting everytime with 0.
 */
void times_table(void)
{
	int n, i, res;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');
			res = n * i;
			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
