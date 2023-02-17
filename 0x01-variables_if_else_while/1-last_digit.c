#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * this code displays last digit of a rando number
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	last_digit = n % 10;
	if (last_digit > 5)
		printf("is %d and is greater than 5\n", last_digit);
	else if (last_digit == 0)
	       printf("is %d and is 0\n", last_digit);
	else
		printf("is %d and is less than 6 and not 0\n", last_digit);
	return (0);
}
