#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * this code detects whether the value is a character or not
 * @c: function argument
 * Return: always 1 (Success)
 */
int _isalpha(int c)
{
	int up = 'A', low = 'a', counter = 0;

	do {
		if (c == up)
		{
			counter++;
			break;
		}
		up++;
	} while (up <= 'Z');
	if (counter == 0)
	{
		while (low <= 'z')
		{
			if (c == low)
			{
				counter++;
				break;
			}
			counter++;
		}
		return (counter);
	}
}
