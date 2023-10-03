#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - free a 2D grid
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
