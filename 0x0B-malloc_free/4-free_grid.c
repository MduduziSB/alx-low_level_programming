#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -  returns a pointer to a 2 dimensional array of integers
 * @grid: 2 dimensional array
 * @height: number of clumns
 * Return: always 0.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

