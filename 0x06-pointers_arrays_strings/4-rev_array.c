#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: first parameter
 * @n: second parameter
 * Return: always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp, j;

	while (i < n / 2)
	{
		j = n - 1 - i;
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
		i++;
	}
}

