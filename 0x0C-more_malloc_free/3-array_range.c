#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range -  creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *a, i = 1;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	a[0] = min;
	while (a[i - 1] < max)
	{
		a[i] = a[i - 1] + 1;
		i++;
	}
	return (a);
}

