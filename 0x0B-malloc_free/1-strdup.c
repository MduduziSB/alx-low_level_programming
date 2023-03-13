#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	char *ptr;
	int j = 0;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(str));
	if (ptr == NULL)
		return (NULL);
	while (*str)
	{
		ptr[j] = *str++;
		j++;
	}
	return (ptr);
}

