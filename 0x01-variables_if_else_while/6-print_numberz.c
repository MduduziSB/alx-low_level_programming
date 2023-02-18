#include <stdio.h>

/**
 * main - Entry point
 * this code displays numbers 0-9 using putchar
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = '0';
	
	do {
		putchar(i);
		i++;
	} while (i <= '9');
	putchar('\n');
	return (0);
}
