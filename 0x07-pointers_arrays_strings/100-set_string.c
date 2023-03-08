#include <stdio.h>
#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: parameter
 * @to: parameter
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}

