#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this code displays alphabets in reverse order
 * Return: always 0 (Success)
 */
int main(void)
{
	for (int alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
