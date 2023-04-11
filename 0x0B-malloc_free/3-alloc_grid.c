#include "main.h"
/**
 * alloc_grid - allocate two dimensions array and fill it with 0
 * @width: row of 2 dim array
 * @height: column of 2 dim array
 * Return: the pointer to the 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *) + 1);
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (!array[i])
			return (NULL);
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	array[i] = NULL;
	return (array);
}
