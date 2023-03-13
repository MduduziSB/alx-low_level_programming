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
	int **ptr, j, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(width * sizeof(int *));
	while (i < width)
	{
		ptr[i] = malloc(height * sizeof(int));
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < width)
	{
		j = 0;
		while (j < height)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}

