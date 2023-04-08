#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - finds the value of a bit at a given index
 * @n: decimal number
 * @index: bit index
 * Return: returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = index;
	unsigned long int num = n, modf = 1;

	if (i > 63)
		return (-1);
	while (i)
	{
		modf *= 2;
		i--;
	}
	num = num | modf;
	if (num == n)
		return (1);
	return (0);
}

