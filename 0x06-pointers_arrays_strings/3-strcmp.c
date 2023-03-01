#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: 0 (Success) 15 (s1 > s2) -15 (s2 > s1)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
			return (15);
		if (*(s1 + i) < *(s2 + i))
			return (-15);
		if (s1[i] == s2[i] && (s1[i + 1] == '\0' && s2[i + 1] == '\0'))
			return (0);
		if (s1[i] == s2[i] && (s1[i + 1] != '\0' && s2[i + 1] == '\0'))
			return (15);
		if (s1[i] == s2[i] && (s1[i + 1] == '\0' && s2[i + 1] != '\0'))
			return (-15);
		i++;
	}
}
