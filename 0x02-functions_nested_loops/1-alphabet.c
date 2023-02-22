#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * this code creates a function that prints alphabets in lowercase
 * Return: always 0 (Success)
 */

void print_alphabet(void)
{
	int alpha = 'a';

	do {
		_putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	_putchar('\n');
}
