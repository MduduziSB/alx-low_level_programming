#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: modified string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return ((char *)dest);
}

