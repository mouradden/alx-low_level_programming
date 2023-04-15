#include "main.h"
/**
 * _calloc - same as orignal calloc
 * @nmemb: the number of elements
 * @size: size of any
 * Return: the pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char	*ptr;
	unsigned int i, total_size;

	if (!nmemb || !size)
		return (NULL);
	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
