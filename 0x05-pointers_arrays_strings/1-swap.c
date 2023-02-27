#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * swap_int - Function that swaps two values
 * @a: first function parameter
 * @b: second function parameter
 * Return: always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

