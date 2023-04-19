#include "main.h"
/**
 * print_diagonal - print '\' n times
 * @n: patametre n times to print
 */
void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		j = i;
		while (j > 0)
		{
			_putchar(32);
			j--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
