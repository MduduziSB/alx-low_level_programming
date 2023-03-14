#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: number of rows
 * @height: number of clumns
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, ix = 0, iy, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		i++;
	}
	while (ix < height)
	{
		iy = 0;
		while (iy < width)
		{
			ptr[ix][iy] = 0;
			iy++;
		}
		ix++;
	}
	return (ptr);
}

