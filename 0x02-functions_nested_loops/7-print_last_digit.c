#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * this function computes last digit of a number
 * @x: function argument
 * Return: always 0 (Success)
 */
int print_last_digit(int x)
{
	if (x >= 0)
	{
		_putchar((x % 10) + '0');
		return (x % 10);
	}
	else
	{
		x *= -1;
		_putchar((x % 10) + '0');
		return (x % 10);
	}
}
