#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - allocates a 2d array of integers.
* @width: width of the grid
* @height: height of the grid
* Return: a pointer to an array or NULL.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int h;
	int w;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (h = 0;
	h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (i = 0;
			i < h; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (w = 0;
	   w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
