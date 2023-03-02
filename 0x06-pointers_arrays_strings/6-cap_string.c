#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: parameter
 * Return: string
 */
char *cap_string(char *str)
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
			if (str[i] == j && (str[i - 1] == ' ' || (i == 0 || str[i - 1] == '.')))
			{
				str[i] = upper[k];
				break;
			}
			if (str[i] == j && (str[i - 1] == '\n' || str[i - 1] == '\t'))
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

