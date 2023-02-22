#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * this funcion prints ten times the alphabets in lowercase
 * Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int counter = 1;

	do {
		int alpha = 'a';

		do {
			_putchar(alpha);
			if (alpha == 'z')
				_putchar('\n');
			alpha++;
		} while (alpha <= 'z');
		counter++;
	} while (counter <= 10);
}
