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

	while (up <= 'Z' || low <= 'z')
	{
		if (c == up || c == low)
		{
			counter++;
			break;
		}
		up++;
		low++;
	}
	return (counter);
}
