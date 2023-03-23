#include "3-calc.h"
#include <stdio.h>
/**
 * main - tests calculator program
 * @argc: argument count
 * @argv: array of strings
 * Return: integer value
 */
int main(int argc, char **argv)
{
	int (*fptr)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fptr = get_op_func(argv[2]);
	if (fptr == 0)
	{
		printf("Error\n");
		exit(99);
	}
	if (!atoi(argv[3]) && (!strcmp(argv[2], "/") || !strcmp(argv[2], "%")))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", fptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

