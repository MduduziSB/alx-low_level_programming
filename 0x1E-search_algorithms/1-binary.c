#include "search_algos.h"
/**
 * print_array - print all elements in an array
 * @array: array of integers
 * @i: index from which to start printing
 * @size: array size
 * Return: no return
 */
void print_array(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");
	while (i < size)
	{
		printf("%d%s", array[i], i < size - 1 ? ", " : "\n");
		i++;
	}
}

/**
 * binary_search - Uses Binary search algorithm to search for value
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 (array NULL/value matches no element), element index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0, idy = size - 1;
	size_t m;

	if (!array)
		return (-1);
	while (idx <= idy)
	{
		print_array(array, idx, idy + 1);
		m = (idx + idy) / 2;
		if (array[m] < value)
			idx = m + 1;
		else if (array[m] > value)
			idy = m - 1;
		else
			return (m);
	}
	return (-1);
}
