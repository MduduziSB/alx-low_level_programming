#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_numbers - prints numbers  from 0-9
 * Return: always 0
 */
void print_numbers(void)
{
	int  num = 0;

	do {
		_putchar(num + '0');
		if (num == 9)
		{
			_putchar('$');
			_putchar('\n');
		}
		num++;
	} while (num <= 9);
}

