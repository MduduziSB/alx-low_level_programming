#include "main.h"
#include <stdio.h>
/**
 * main - prints its name
 * @argc: integer
 * @argv: array of strings
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	char *name = argv[0];

	while (argc--)
	{
		if (argc == 0)
		{
			while (*name)
				putchar(*name++);
		}
	}
	putchar('\n');
	return (0);
}

