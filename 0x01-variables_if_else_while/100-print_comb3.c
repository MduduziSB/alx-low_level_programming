#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * this code prints all possible different combinations of two digits
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = '0', j;

	while (i <= '8')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return (0);
}
