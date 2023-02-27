#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts2 - function that prints every other charecter
 * @str: function parameter
 * Return: always 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

