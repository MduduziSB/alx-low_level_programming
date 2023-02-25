#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * largest_prime_factor - Detects whether the given number is prime
 * Return: always 0 (success)
 */
void largest_prime_factor(void)
{
	unsigned long int largest, num = 612852475143, i = 3;

	while (num % 2 == 0)
	{
		largest = 2;
		num = num / 2;
	}
	while (i <= sqrt(num))
	{
		while (num % 3 == 0)
		{
			largest = i;
			num = num / i;
		}
		i = i + 2;
	}
	if (num > 2)
		largest = num;
	printf("%lu\n", largest);
}
/**
 * main - displays largest prime factor
 * Return: always 0 (success)
 */
int main(void)
{
	largest_prime_factor();
	return (0);
}

