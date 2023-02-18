#include <stdio.h>

/**
 * main - Entry point
 * this code displays alphabets in reverse order
 * Return: always 0 (Success)
 */
int main(void)
{
	int alpha = 'z';
	
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
