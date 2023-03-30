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
	n--;
	while (i <= n)
	{
		help = a[i];
		a[i] = a[n];
		a[n] = help;
		i++;
		n--;
	}
}
