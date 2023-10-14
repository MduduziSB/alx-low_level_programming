#include "search_algos.h"
/**
 * _binary_search - uses binary search to search for a value in a sorted array
 * @array: array of integers
 * @l: Left element
 * @r: Right element
 * @value: value to search for
 * Return: value index (if found), 0 (otherwise)
 */

int _binary_search(int *array, size_t l, size_t r, int value)
{

	size_t i;

	if (!array)
		return (-1);

	while (r > l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
/**
 * exponential_search -  function that uses exponetial search to search for
 * value in a sorted array of integers
 * @array: Integer array
 * @size: array size
 * @value: value to search for
 * Return: Element index (if value found), -1 (otherwise)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, r;
	char *str = "Value checked array";
	char *s = "Value found between indexes";

	if (!array)
		return (-1);

	if (*array != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("%s[%ld] = [%d]\n", str, i, array[i]);
	}

	if (i < size)
		r = i;
	else
		r = size - 1;
	printf("%s [%ld] and [%ld]\n", s, i / 2, r);
	return (_binary_search(array, i / 2, r, value));
}
