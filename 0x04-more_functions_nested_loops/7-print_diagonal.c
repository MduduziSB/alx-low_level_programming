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

	do {
		putchar(' ');
		k++;
	} while (k < n);
}
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: function parameter
 * Return: always 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		int j = 1;

		do {
			_putchar('\\');
			_putchar('\n');
			j++;
			if (j <= n)
			spaces(j);
		} while (j <= n);
	}
}

