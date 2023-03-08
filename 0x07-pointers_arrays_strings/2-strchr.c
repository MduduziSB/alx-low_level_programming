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
	char *ptr;

	while (*s != c && *s != '\0')
	{
		s++;
	}
	ptr = s;
	if (*ptr != '\0')
		return (ptr);
	else
		return (NULL);
}

