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
	int i = 0, strlen = 0, k = 0;

	while (src[i] != '\0')
	{
		strlen++;
		i++;
	}
	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}
	return ((char *)dest);
}

