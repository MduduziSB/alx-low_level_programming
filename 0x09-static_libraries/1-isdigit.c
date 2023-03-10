#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - Entry point
 * this function detects if a character is a digit from 0-9
 * @c: function argument
 * Return: always 1 (Success) 0 (failure)
 */
int _isdigit(int c)
{
	int tmp = '0', count = 0;

	do {
		if (c == tmp)
		{
			count++;
			break;
		}
		tmp++;
	} while (tmp <= '9');
	return (count);
}

