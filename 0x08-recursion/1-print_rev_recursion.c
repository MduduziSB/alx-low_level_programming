#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	if (*s)
		_putchar(*s--);
}

