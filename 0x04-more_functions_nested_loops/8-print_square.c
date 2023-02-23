#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_square - this function prints a square using # character
 * @size: function argument
 * Return: always 0 (Success)
 */
void print_square(int size)
{
	int col  = 1, row;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (col <= size)
		{
			row = 1;
			do {
				_putchar('#');
				row++;
			} while (row <= size);
			_putchar('\n');
			col++;
		}
	}
}

