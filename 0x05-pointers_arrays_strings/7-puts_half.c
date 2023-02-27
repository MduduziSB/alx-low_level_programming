#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts_half - function to print last half of a string
 * @str: function parameter
 * Return: always 0 (Success)
 */
void puts_half(char *str)
{
	int i = 0, strlen = 0, j;

	while (*(str + i) != '\0')
	{
		strlen++;
		i++;
	}
	if (strlen % 2 == 0)
	{
		j = strlen / 2;
		while (j < strlen)
		{
			_putchar(*(str + j));
			j++;
		}
	}
	else
	{
		j = (strlen - 1) / 2 + 1;
		while (j < strlen)
		{
			_putchar(*(str + j));
			j++;
		}
	}
	_putchar('\n');
}

