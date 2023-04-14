#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: grid or NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
