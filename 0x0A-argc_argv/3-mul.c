#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: arguments
 * Return: always 0(success)
 */
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

