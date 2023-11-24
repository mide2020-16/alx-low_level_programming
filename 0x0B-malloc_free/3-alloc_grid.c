#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height) {
	int **grid;
	
    if (width <= 0 || height <= 0) {
        return (NULL);
    }
    grid = malloc(height * sizeof(int *));
	
    if (grid == NULL)
        return (NULL);
    for (int i = 0; i < height; i++) 
    {
        grid[i] = malloc(width * sizeof(int));

        if (grid[i] == NULL)
            return (NULL);

        for (int j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return grid;
}
