#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * this code function detects whether character is lowercase or not
 * Return: always 1 (Success)
 */
int _islower(int c)
{
	int tmp = 'a', counter = 0;

	do {
		if (c == tmp)
		{
			counter++;
			break;
		}
		tmp++;
	} while (tmp <= 'z');
	return (counter);
}
