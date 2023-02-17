#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * code dertemines whether the number is positive, zero or negetive
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("is positive\n");
	else if (n == 0)
	printf("is zero\n");
	else
	printf("is negetive\n");
	return (0);
}
