#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncpy - Copies the string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0, len = 0;

	while (src[len] != '\0')
		len++;
	if (n <= len)
	{
		while (k < n)
		{
			dest[k] = src[k];
			k++;
		}
	}
	else
	{
		while (src[k] != '\0')
		{
			dest[k] = src[k];
			k++;
		}
		do {
			dest[k] = '\0';
			k++;
		} while (k < n);
	}
	return ((char *)dest);
}

