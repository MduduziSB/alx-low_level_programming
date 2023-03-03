#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * ten - multiplies by ten
 * @n:parameter
 * Return: number
 */
int ten(int n)
{
	int i = n, j = 1;

	while (i >= 1)
	{
		j *= 10;
		i--;
	}
	return (j);
}
/**
 * size - computes integer length
 * @n: parameter
 * Return: number
 */
unsigned int size(unsigned int n)
{
	unsigned int num = n, i = 0;

	while (num >= 1)
	{
		i++;
		num /= 10;
	}
	return (i);
}

/**
 * print_number - prints an integer
 * @n: parameter
 * Return: always 0 (success)
 */
void print_number(int n)
{
	unsigned int num, num0, i, m;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	num0 = num;
	if (num < 10)
		_putchar(num + '0');
	else
	{
		i = size(num);
		m = i;
		while (i >= 1)
		{
			if (i == m)
				_putchar((num0 / ten(i - 1)) + '0');
			else if (i > 1 && i < m)
			{
				num = num0 / ten(i - 1);
				_putchar((num % 10) + '0');
			}
			else
				_putchar((num0 % 10) + '0');
			i--;
		}
	}
}

