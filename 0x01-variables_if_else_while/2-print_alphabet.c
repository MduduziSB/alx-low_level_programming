#include <stdio.h>

/**
 * main - Entry point
 * this code displays alphabets in lower cases
 * Return: always 0 (Success)
 */
int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
