#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * num_bit - computes the number of bits required
 * @n: decimal integer
 * Return: number of bits
 */
unsigned int num_bit(unsigned long int n)
{
	unsigned int bit = 0;
	unsigned long int num = n;

	if (!(num) || num == 1)
		return (1);
	while (num)
	{
		num /= 2;
		bit++;
	}
	return (bit);
}
/**
 * get_bit - finds the value of a bit at a given index
 * @n: decimal number
 * @index: bit index
 * Return: returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = num_bit(n), i;
	char *b;
	unsigned long int num = n;

	b = malloc(size * sizeof(char));
	if (!b)
		return (-1);
	i = 0;
	if (!num)
		b[i] = '0';
	while (num)
	{
		b[i] = (num % 2) + '0';
		num /= 2;
		i++;
	}
	if (index >= size)
		return (-1);
	return (b[index] - '0');
}

