#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this code displays numbers for 0-9
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		if (i == 9)
			printf("\n");
		i++;
	} while (i <= 9);
	return (0);
}
