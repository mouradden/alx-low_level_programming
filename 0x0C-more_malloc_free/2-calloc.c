#include "main.h"
/**
 * _calloc - same as orignal calloc
 * @nmemb: the number of elements
 * @size: size of any
 * Return: the pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;

	ptr = malloc (nmemb * size);
	if (!ptr)
		return (ptr);
	while (size > 0)
	{
		*ptr = 0;
		ptr++;
		size--;
	}
	return (ptr);
}
