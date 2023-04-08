#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_size - computes the number of bits
 * @n: decimal integer numbure
 * Return: number of bits
 */
unsigned int get_size(unsigned long int n)
{
	unsigned int s = 0;
	unsigned long int num = n;

	if (num == 1 || !num)
		return (1);
	while (num)
	{
		num = (num >> 1);
		s++;
	}
	return (s);
}
/**
 * print_binary - prints the binary form of a number
 * @n: integer
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int index = get_size(n), j;
	unsigned long int num = n, modf = 1;

	if (!n)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		while (index)
		{
			j = index - 1;
			while (j)
			{
				modf *= 2;
				j--;
			}
			num = num | modf;
			if (n == num)
				_putchar('1');
			else
				_putchar('0');
			modf = 1;
			num = n;
			index--;
		}
	}
}

