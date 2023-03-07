#include <stdio.h>
#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: parameter
 * @c: parameter
 * Return: string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		char *p = s;

		if (*s == c)
			return (p);
		s++;
	}
	return (NULL);
}

