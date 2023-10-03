#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - create a 2-dimensional array initialized
 * with 0
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height *  sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
