#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - computes string length
 * @str: string
 * Return: unsigned integer
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
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
	if (n > _strlen(s2))
		j = _strlen(s2);
	s = malloc((_strlen(s1) + j + 1) * sizeof(char));
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

