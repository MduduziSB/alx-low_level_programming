#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rev_string - function that reverses the string
 * @s: function parameter
 * Return: always 0 (Success)
 */
void rev_string(char *s)
{
	int i = 0, strsize = 0, j, tmp, k = 0;

	while (*(s + i) != '\0')
	{
		strsize++;
		i++;
	}

	while (k < strsize / 2)
	{
		j = strsize - 1 - k;
		tmp = *(s + k);
		*(s + k) = *(s + j);
		*(s + j) = tmp;
		k++;
	}
}

