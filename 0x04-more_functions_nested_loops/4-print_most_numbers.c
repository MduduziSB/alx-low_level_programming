#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers  from 0-9 except 2 and 4
 * Return: always 0
 */
void print_most_numbers(void)
{
	int  num = 0;

	do {
		if (num == 2 || num == 4)
			num++;
		_putchar(num + '0');
		if (num == 9)
			_putchar('\n');
		num++;
	} while (num <= 9);
}

