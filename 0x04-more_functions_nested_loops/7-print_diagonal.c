#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: function parameter
 * Return: always 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int dia = 1, space;

		do {
			space = 1;
			while (space < dia)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			dia++;
		} while (dia <= n);
	}
}

