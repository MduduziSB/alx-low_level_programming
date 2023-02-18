#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this code displays combination of single numbers in ascending order
 * Return: always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (num == '9')
			putchar(num);
		else
		{
			putchar(num);
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	return (0);
}

