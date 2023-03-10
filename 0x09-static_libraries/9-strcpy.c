#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: first parameter
 * @src: second parameter
 * Return: always a copy of astring
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);

	return ((char *)dest);
}

