#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: the grid
 * @height:  the height
 * Return: Success
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
	}
}

