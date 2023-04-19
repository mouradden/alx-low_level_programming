#include "main.h"
/**
 * print_diagsums - display chess
 * @a: the chess to display
 * @size: the size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
