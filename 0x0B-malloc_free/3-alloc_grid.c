#include "main.h"
/**
 * alloc_grid - Allocates a 2D grid of integers.
 *
 * @width:  The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return:  A pointer to the newly allocated 2D grid, or NULL on failure.
 *          Each element is initialized to 0.
 */



int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
			free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}


	for (j = 0; j < width; j++)
	{
		arr[i][j] = 0;
	}

	return (arr);
}
