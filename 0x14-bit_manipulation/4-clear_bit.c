#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - sets a bit value to 0 at a given index
 * @n: decimal integer
 * @index: bit position
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long modf = 1, num = *n;

	if (index > 63)
		return (-1);
	modf = modf << index;
	*n = num & ~(modf);
	return (1);
}

