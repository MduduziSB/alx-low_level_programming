#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * this code prints numbers in hexadecimal form
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

