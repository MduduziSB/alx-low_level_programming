#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - Entry point
 * this function detects if a character is an uppercase
 * @c: function argument
 * Return: always 1 (Success) 0 (failure)
 */
int _isupper(int c)
{
	int tmp = 'A', count = 0;

	do {
		if (c == tmp)
		{
			count++;
			break;
		}
		tmp++;
	} while (tmp <= 'Z');
	return (count);
}

