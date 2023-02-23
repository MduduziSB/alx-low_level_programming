#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * fizz - prints 'Fizz'
 * Return: always 0
 */
void fizz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
}

/**
 * buzz - prints 'Buzz'
 * Return: always 0 (success)
 */
void buzz(void)
{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
}
/**
 * main - prints numbers 1-100
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 1;

	do {
		if (i % 3 == 0 && i % 5 > 0)
			fizz();
		else if (i % 3 == 0 && i % 5 == 0)
		{
			fizz();
			buzz();
		}
		else if (i % 3 > 0 && i % 5 == 0)
			buzz();
		else
		{
			if (i >= 10)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		if (i < 100)
			putchar(' ');
		i++;
	} while (i <= 100);
	putchar('\n');
	return (0);
}
