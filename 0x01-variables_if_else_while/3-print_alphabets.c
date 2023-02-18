#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this code displays charecters a-z both in lower and upper case
 * Return: always 0 (Success)
 */
int main(void)
{
	int alpha = 'a', upper = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		if (alpha == 'z')
		{
			while (upper <= 'Z')
			{
				putchar(upper);
				upper++;
			}
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
