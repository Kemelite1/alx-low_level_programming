#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function to free array
 * @grid: 2 dimensional grid
 * @height: height of grid
 * Return: 0 when successful
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid);
	}
	free(grid);
}
