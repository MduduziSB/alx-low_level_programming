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
		putchar(num + '0');
		num++;
	} while (num <= 9);
	putchar('\n');
}

