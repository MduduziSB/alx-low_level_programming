#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, size = 0, m;

	while (dest[i] != '\0')
		i++;
	while (src[size] != '\0')
		size++;
	if (n > size)
		m = size;
	else
		m = n;
	while (m > 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
		m--;
	}
	return ((char *)dest);
}

