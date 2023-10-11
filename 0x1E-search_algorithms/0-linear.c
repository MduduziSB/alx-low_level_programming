#include "search_algos.h"
/**
 * linear_search - uses Linear search algorithm to search for value in an array
 * @array: Integer array
 * @size: Array size
 * @value: value to search for in an array
 * Return: -1 if array NULL, index value otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
