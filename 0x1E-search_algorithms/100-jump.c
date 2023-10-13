#include "search_algos.h"
/**
 * jump_search - searches for a value in an array using Jump search algorithm
 * @array: array of integers
 * @size: array size
 * @value: value to search for
 * Return: Element index if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j = 0, i = 0, step = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		j = i;
		i += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, i);
	i = i < size - 1 ? i : size - 1;

	while (j <= i && array[j] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
		j++;
	}

	return (-1);
}
