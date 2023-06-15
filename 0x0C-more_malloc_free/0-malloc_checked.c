#include "main.h"
/**
 * malloc_checked - allocate and check if it  succeed of fails
 * @b: the number of memory cases to allocate
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
