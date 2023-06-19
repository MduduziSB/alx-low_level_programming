#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts - function to print a string to standard output
 * @str: function parameter
 * Return: always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

