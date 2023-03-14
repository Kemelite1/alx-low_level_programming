#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **b;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = malloc(sizeof(int *) * height);


	if (b == NULL)
		return (NULL);


	for (x = 0; x < height; x++)
	{
		b[x] = malloc(sizeof(int) * width);

		if (b[x] == NULL)
		{
			for (; x >= 0; x--)
				free(b[x]);

			free(b);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			b[x][y] = 0;

	}

	return (b);

}

}
