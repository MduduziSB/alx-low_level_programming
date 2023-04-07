#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets the bit to 1 at a given index
 * @n: decimal number
 * @index: bit position
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p = index;
	unsigned long int modf = 1, num = *n;

	while (p)
	{
		modf *= 2;
		p--;
	}
	*n = (*n | modf);
	if (num == *n)
		return (-1);
	return (1);
}

