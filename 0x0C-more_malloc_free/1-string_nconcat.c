#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j = n, i = 0, k = 0;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	if (n > strlen(s2))
		j = strlen(s2);
	s = malloc((strlen(s1) + j + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (*s1)
	{
		s[i] = *s1++;
		i++;
	}
	while (k < j)
	{
		s[i] = *s2++;
		i++;
		k++;
	}
	s[i] = '\0';
	return (s);
}

