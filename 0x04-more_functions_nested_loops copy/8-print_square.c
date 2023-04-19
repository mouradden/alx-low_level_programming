#include "main.h"
/**
 * print_square - print '#' size times as a square
 * @size: patametre n times to print
 */
void print_square(int size)
{
	int	i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
