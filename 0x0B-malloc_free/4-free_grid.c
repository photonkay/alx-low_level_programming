#include "main.h"
#include <stdlib.h>

/**
 * free_gird - frees the grid allocation in 3-alloc_grid.c
 * @grid: array pointer pointer
 * @height: height of array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
