#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix
 * @size: matrix size
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sumx = 0, sumy = 0, j = size - 1;

	while (i < size)
	{
		sumx += a[i * size + i];
		i++;
	}
	while (j >= 0)
	{
		sumy += a[j * size + (size - j - 1)];
		j--;
	}
	printf("%d, %d\n", sumx, sumy);
}

