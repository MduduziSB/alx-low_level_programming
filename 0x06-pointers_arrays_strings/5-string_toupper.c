#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: parameter
 * Return: string
 */
char *string_toupper(char *str)
{
	int i = 0, len = 0, k = 0, j;
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		j = 'a';
		k = 0;
		while (j <= 'z')
		{
			if (str[i] == j)
			{
				str[i] = upper[k];
				break;
			}
			k++;
			j++;
		}
		i++;
	}
	return ((char *)str);
}

