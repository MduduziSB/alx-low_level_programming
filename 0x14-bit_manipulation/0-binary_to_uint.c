#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - computes a string's length
 * @str: string
 * Return: string length
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number
 * Return: the converted number, or 0 (fail)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bit_size = 0, dec = 0, i = 0, j;
	unsigned int bt;

	if (!b)
		return (bit_size);
	bit_size = _strlen(b);
	while (i < bit_size)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		j = bit_size - i - 1;
		bt = b[i] - '0';
		while (j)
		{
			bt *= 2;
			j--;
		}
		dec += bt;
		i++;
	}
	return (dec);
}

