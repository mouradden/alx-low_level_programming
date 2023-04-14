#include "main.h"
/**
 * array_range - allocate an array of integers and fill it from min to max
 * @min: the starting number
 * @max: the ending number
 * Return: the pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int	len, i;
	int	*result;

	if (min >= max)
		return (NULL);
	len = max - min + 1;
	result = (int *)malloc(sizeof(int) * (len));
	if (!result)
		return (NULL);
	i = 0;
	while (max => min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
