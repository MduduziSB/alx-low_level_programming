#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: function parameter
 * Return: always 0 (Success)
 */
void print_rev(char *s)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		j++;
		i++;
	}
	while (j >= 1)
	{
		_putchar(*(s + j - 1));
		j--;
	}
	_putchar('\n');
}

