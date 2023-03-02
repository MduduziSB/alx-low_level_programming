#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @src: parameter
 * Return: a string
 */
char *leet(char *src)
{
	char *enco_c = "aAeEoOtTlL", *rep_c = "4433007711";
	int i = 0, j;

	while (src[i] != '\0')
	{
		j = 0;
		while (enco_c[j] != '\0')
		{
			if (src[i] == enco_c[j])
			{
				src[i] = rep_c[j];
				break;
			}
			j++;
		}
		i++;
	}
	return ((char *)src);
}

