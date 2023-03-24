#include <stdio.h>
#include <stdlib.h>
/**
 * display - prints data
 * @str: string
 * @nbyt: integer
 * Return: Always 0
 */
void display(char *str, int nbyt)
{
	int i = 0;

	while (i < nbyt)
	{
		if (i == nbyt - 1)
			printf("%.2hhx\n", str[i]);
		else
			printf("%.2hhx ", str[i]);
		i++;
	}
}
/**
 * main - prints opcodes of main function
 * @argc: number of arguments
 * @argv: argument(s)
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int nbyte = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (nbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	display((char *)&main, nbyte);
	return (0);
}

