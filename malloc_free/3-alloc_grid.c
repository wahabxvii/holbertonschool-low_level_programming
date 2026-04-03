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
			return (NULL);
		for (w = 0;
	   w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
