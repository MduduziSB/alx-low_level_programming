#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes of memory
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL || b == 0)
		exit(98);
	return (p);
}

