#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - Function prints  '_' n times
 * @n: function argument
 * Return: always 0 (success)
 */
void print_line(int n)
{
	int k = 1;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (k <= n)
		{
			putchar('_');
			k++;
		}
		putchar('\n');
	}
}

