#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments
 * Return: integer
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0, j = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		while (i < argc)
		{
			char *s = argv[i];

			while (*s)
			{
				if (*s < '0' || *s > '9')
				{
					j += 1;
					printf("Error\n");
					return (1);
				}
				s++;
			}
			i++;
		}
		if (j == 0)
		{
			i = 1;
			while (i < argc)
			{
				sum += atoi(argv[i]);
				i++;
			}
			printf("%d\n", sum);
		}
	}
	return (0);
}

