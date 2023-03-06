#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * this code prints numbers in hexadecimal form
 * Return: always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i++ < n)
		*s++ = b;
	return ((char *)s);
}

