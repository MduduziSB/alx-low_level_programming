#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - computes number of bits needed to flip
 * @n: decimal integer number
 * @m: desired integer number
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int max, check = 1, j = 0, c, d;
	unsigned int count = 0;

	if (n == m)
		return (0);
	if (n > m)
		max = n;
	else
		max = m;
	while (check <= max)
	{
		c = n | check;
		d = m | check;
		if ((n == c && m != d) || (n != c && m == d))
			count++;
		j++;
		check = 1;
		check = check << j;
	}
	return (count);
}

