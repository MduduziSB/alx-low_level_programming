#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this code prints numbers in lowercase hexadecimal form
 * Return: always 0 (Success)
 */
int main(void)
{
	int digit = '0', alpha = 'a';

	do {
		putchar(digit);
		if (digit == '9')
		{
			while (alpha <= 'f')
			{
				putchar(alpha);
				alpha++;
			}
		}
		digit++;
	} while (digit <= '9');
	putchar('\n');
	return (0);
}
