#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_sign - Entry point
 * this function prints the sign of a number
 * @n: function argument
 * Return: always 1 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
