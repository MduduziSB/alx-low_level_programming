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
	int lower = 'a', upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		if (lower == 'z')
		{
			while (upper <= 'Z')
			{
				putchar(upper);
				upper++;
			}
		}
		lower++;
	}
		putchar('\n');
		return (0);
}
