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
	int counter = 0;

	for (int up = 'A' int low = 'a'; up <= 'Z', low <= 'z'; up++, low++)
	{
		if (c == up || c == low)
		{
			counter++;
			break;
		}
	}
	return (c);
}
