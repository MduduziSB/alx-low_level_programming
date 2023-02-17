#include<stdio.h>
#include<unistd.h>

/**
 * main - Entry point
 * working on unix to print a line on standard erro
 * Return: Always 1 (Success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar", stdout);
	fputs(", 2015-10-19\n", stdout);
	return (1);
}
