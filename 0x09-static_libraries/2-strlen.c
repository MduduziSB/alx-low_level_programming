#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function that computes string length
 * @s: function parameter
 * Return: always returns string length
 */
int _strlen(char *s)
{
	int i = 0, strlen = 0;

	while (*(s + i) != '\0')
	{
		strlen++;
		i++;
	}
	return (strlen);
}

