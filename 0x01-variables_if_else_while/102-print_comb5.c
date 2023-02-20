#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this code prints all possible combinations of two two-digit numbers
 * Return: always 0 (Success)
 */
int main(void)
{
	int fd = 0, ld;

	while (fd <= 98)
	{
		ld = fd + 1;
		do {
			putchar((fd / 10) + '0');
			putchar((fd % 10) + '0');
			putchar(' ');
			putchar((ld / 10) + '0');
			putchar((ld % 10) + '0');
			if (fd == 98 && ld == 99)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			ld++;
		} while (ld <= 99);
		fd++;
	}
	return (0);
}
