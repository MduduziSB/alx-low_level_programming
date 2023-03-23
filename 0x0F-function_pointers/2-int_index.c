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
	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);
}

