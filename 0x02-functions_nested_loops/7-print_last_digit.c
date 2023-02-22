#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * this code prints numbers in hexadecimal form
 * @x: function argument
 * Return: always 0 (Success)
 */
int print_last_digit(int x)
{
	if (x >= 0)
	{
		_putchar((x % 1000) + '0');
		return (x % 1000);
	}
	else
	{
		x *= -1;
		_putchar((x % 1000) + '0');
		return (x % 1000);
	}
}
