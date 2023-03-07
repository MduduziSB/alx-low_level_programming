#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: parameter
 * Return: always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int ix = 0, iy;

	while (ix < 8)
	{
		iy = 0;
		while (iy < 8)
		{
			printf("%c", a[ix][iy]);
			iy++;
		}
		printf("\n");
		ix++;
	}
}

