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
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		(char *)ptr[i] = 0;
		i++;
	}
	return (ptr);
}
