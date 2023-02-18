#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this code displays numbers 0-9 using putchar
 * Return: always 0 (Success)
 */
int main(void)
{
	int counter = '0';

	do {
		putchar(counter);
		counter++;
	} while (counter <= '9');
	putchar('\n');
	return (0);
}
