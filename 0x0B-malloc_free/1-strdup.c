#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	char *ptr;
	int j = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

