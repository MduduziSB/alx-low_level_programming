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
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] != '\0')
		return (s + i);
	else
		return (NULL);
}

