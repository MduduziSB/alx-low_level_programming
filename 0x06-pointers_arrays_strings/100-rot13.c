#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @str: parameter
 * Return: string
 */
char *rot13(char *str)
{
	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (str[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return ((char *)str);
}

