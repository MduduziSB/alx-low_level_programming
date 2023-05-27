#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - checks for endianness
 * Return: 0 (Big endian) 1 (little endian)
 */
int get_endianness(void)
{
	int num = 1;
	char *check = (char *)&num;

	if (*check == 1)
		return (1);
	return (0);
}

