#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - Function prints  '_' n times
 * @n: function argument
 * Return: always 0 (Success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('$');
		_putchar('\n');
	}
	else
	{
		while (n >= 1)
		{
			_putchar('_');
			if (n == 1)
			{
				_putchar('$');
				_putchar('\n');
			}
			n--;
		}
	}
}

