#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return ((char *)s);
}

