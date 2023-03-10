#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: arguments
 * Return: always 0(success)
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}

