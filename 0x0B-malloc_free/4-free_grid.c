#include "main.h"

/**
 * free_grid - frees 2 diensional array
 * @grid: grid t be free
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}
