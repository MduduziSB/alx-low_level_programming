#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - print n elements of an array
 * @a: array
 * @n: elements to be printed
 * Return: always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}

