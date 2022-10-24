#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - create array function
 * @grid: string to concatenate
 * @height: string to concatenate
 * Return: ptr
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
