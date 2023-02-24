#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_triangle - this function prints a triangle using # character
 * @size: function argument
 * Return: always 0 (Success)
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 1, space, l, m;

		do {
			m = size - i;
			space = 1;
			l = 1;
			while (space <= m)
			{
				_putchar(' ');
				space++;
			}
			while (l <= i)
			{
				_putchar('#');
				l++;
			}
			_putchar('\n');
			i++;
		} while (i <= size);
	}
}

