#include "main.h"
/**
 * free_grid - free two dimensions array
 * @grid: the two dimensions array
 * @height: column of 2 dim array
 * Return: the pointer to the 2 dim array
 */
void free_grid(int **grid, int height)
{
	int		i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
