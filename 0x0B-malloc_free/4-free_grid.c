#include <stdlib.h>
#include "main.h"
/**
 * free_grid - That frees the memory allocated for the grid
 * created by the alloc_grid()
 * @grid: The grid to be freed
 * @height: The height of the grid
 */

void free_grid(int **grid, int height)
{
	int r;

	if (grid == NULL || height == 0)
		return;

	for (r = 0; r < height; r++)
		free(grid[r]);

	free(grid);
}
