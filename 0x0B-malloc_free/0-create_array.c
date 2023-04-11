#include "main.h"
/**
 * create_array - check uppercase
 * @size: size of array
 * @c: the parametre
 * Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	array = malloc(size);
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';
	return (array);
}
