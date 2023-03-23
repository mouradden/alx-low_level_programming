#include "main.h"
/**
 * print_square - print '#' size times as a square
 * @size: patametre n times to print
 */
void print_square(int size)
{
	int	i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
		
	}
	_putchar('\n');
}
