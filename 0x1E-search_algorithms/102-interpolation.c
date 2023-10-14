#include "search_algos.h"
/**
 * interpolation_search - uses Interpolation search algorithm for value search
 * @array: Integer array
 * @size: array size
 * @value: value to search for
 * Return: value index (if value is found), -1 (Otherwise)
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t m, l = 0, h = size - 1;
	char *str = "Value checked array";

	if (!array)
		return (-1);
	while (l <= h)
	{
		m = (l + (((double)(h - l) / (array[h] - array[l]))
					* (value - array[l])));
		if (m < size)
			printf("%s[%ld] = [%d]\n", str, m, array[m]);
		else
		{
			printf("%s[%ld] is out of range\n", str, m);
			break;
		}
		if (array[m] == value)
			return (m);
		else if (value < array[m])
			h = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}
