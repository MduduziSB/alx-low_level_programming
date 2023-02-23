#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * more_numbers - prints numbers from 0-14 ten times
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int i = 1, j;

	while (i <= 10)
	{
		j = 0;
		do {
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		} while (j <= 14);
		_putchar('\n');
		i++;
	}
}

