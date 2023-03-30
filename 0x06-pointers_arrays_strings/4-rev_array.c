#include "main.h"

/**
 * reverse_array - reverse array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int help;

	i = 0;
	while (i <= n / 2)
	{
		help = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = help;
		i++;
	}
}
