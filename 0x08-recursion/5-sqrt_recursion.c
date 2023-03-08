#include <stdio.h>
#include "main.h"
/**
 * square - computes square of a number
 * @i: iteration
 * @n: integer
 * Returns: -1 (failure) + number (success)
 */
int square(int i, int n)
{
	if (i < n)
	{
		if (i * i == n)
			return (i);
		else if (i * i > n)
			return (-1);
		else
			return (square(i + 1, n));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (square(2, n));
}
