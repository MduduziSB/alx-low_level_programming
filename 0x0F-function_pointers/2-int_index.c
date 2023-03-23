#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: address of an int array
 * @size: size of array
 * @cmp: function pointer
 * Return: Always 0 (success) -1 (failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}

