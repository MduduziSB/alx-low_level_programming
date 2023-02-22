#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * this code creates a function that prints alphabets in lowercase
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	int alpha = 'a';

	do {
		putchar(alpha);
		if (alpha == 'z')
			_putchar('\n');
		alpha++;
	} while (alpha <= 'z');
}
