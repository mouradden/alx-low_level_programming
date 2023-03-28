#include "main.h"
/**
 * swap_int - swap values
 * @a: the pointer to a
 * @b: the pointer to b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
