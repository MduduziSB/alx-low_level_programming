#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - Entry point
 * this function displays absolute numbers
 *@c: function argument
 * Return: always 1 (Success)
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return ((-1) * c);
}
