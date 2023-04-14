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
	int i;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	while (size * nmemb > i)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
