#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 * this function prints every minute of the day
 * Return: always 0 (Success)
 */
void jack_bauer(void)
{
	int sec = 0, min = 0;

	do {
		sec = 0;
		do {
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar(':');
			putchar((sec / 10) + '0');
			putchar((sec % 10) + '0');
			putchar('\n');
			sec++;
		} while (sec <= 59);
		min++;
	} while (min <= 23);
}
