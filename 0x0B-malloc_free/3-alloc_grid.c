#include <stdlib.h>


/**
 * alloc_grid - Allocates memory for a 2-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: On success, returns a pointer to the allocated grid.
 * If width or height is 0 or negative,
 * or if memory allocation fails, returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
	{
		return  (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return  (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			 grid[i][j] = 0;
		}
	}
	return (grid);
}
