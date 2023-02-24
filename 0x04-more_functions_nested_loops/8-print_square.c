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
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row = 1, col;

		do {
			col = 1;
			while (col <= size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		} while (row <= size);
	}
}

