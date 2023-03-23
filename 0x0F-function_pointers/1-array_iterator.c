#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: address of an array
 * @size: array size
 * @action: function pointer
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
		action(array[i++]);
}

