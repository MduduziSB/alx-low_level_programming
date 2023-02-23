#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * spaces - prints spaces
 * @n: function parameter
 * Return: always 0
 */
void spaces(int n)
{
	int k = 1;

	while (k <= n)
	{
		putchar(' ');
		k++;
	}
}
/**
 * print_triangle - prints triangle
 * @size: function parameter
 * Return: always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
	{
		int k = 1, m = size - 1, l;

		while (k <= size)
		{
			l = k;
			spaces(m);
			while (l >= 1)
			{
				_putchar('#');
				l--;
			}
			_putchar('\n');
			m--;
			k++;
		}
	}
}

