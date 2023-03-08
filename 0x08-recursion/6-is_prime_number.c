#include <stdio.h>
#include "main.h"
/**
 * prime - checks if an integer is a prime
 * @i: iterations
 * @n: integer
 * Return: 0 (failure) 1 (success)
 */
int prime(int i, int n)
{
	if (i == n - 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime(i + 1, n));
}
/**
 * is_prime_number - checks if number is a prime
 * @n: integer
 * Return: 0 (failure) 1 (success)
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	else
		return (prime(2, n));
}

