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
		char *tmps = s;

		if (*tmps == c)
			return (tmps);
		s++;
	}
	return (NULL);
}

