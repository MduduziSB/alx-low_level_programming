#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * two_digit - Entry point
 * this function prints two digit numbers only
 * @tmp: function argument
 * Return: always 0 (Success)
 */
void two_digit(int tmp)
{
	if (tmp < 0)
	{
		putchar('-');
		putchar((abs(tmp) / 10) + '0');
		putchar((abs(tmp) % 10) + '0');
	}
	else
	{
		putchar((tmp / 10) + '0');
		putchar((tmp % 10) + '0');
	}
}
/**
 * three_digit - Entry point
 * this function displays three digit numbers only
 * @n: function argument
 * Return: always 0 (Success)
 */
void three_digit(int n)
{
	int a, tmp;

	if (n > 0)
	{
		putchar('-');
		putchar((abs(n) / 100) + '0');
		putchar(((n / 10) % 10) + '0');
		putchar((n % 10) + '0');
	}
	else
	{
		tmp = n % 10;
		a = n / 10;
		putchar((abs(n) / 100) + '0');
		putchar((abs(a) % 10) + '0');
		putchar(abs(tmp) + '0');
	}
}
/**
 * print_to_98 - Entry point
 * this function prints all natural numbers from n to 98
 * @n: function argument
 * Return: always 0 (success)
 */
void print_to_98(int n)
{
	int tmp = 0, i = 0;

	while (tmp != 98)
	{
		if (n < 98)
			tmp = n + i;
		else
			tmp = n - i;
		if (abs(tmp) >= 100)
			three_digit(tmp);
		else if (abs(tmp) < 100 && abs(tmp) >= 10)
			two_digit(tmp);
		else
		{
			if (tmp < 0)
			{
				putchar('-');
				putchar(abs(tmp) + '0');
			}
			else
				putchar(tmp + '0');
		}
		if (tmp == 98)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
}
