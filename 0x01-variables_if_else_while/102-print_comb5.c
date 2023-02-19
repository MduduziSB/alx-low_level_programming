#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * this code prints all possible combinations of two two-digit numbers
 * Return: always 0 (Success)
 */
int main(void)
{
	int d_00 = '0', d_01, d_10, d_11;

	while (d_00 <= '9')
	{
		d_01 = '0';
		while (d_01 <= '8')
		{
			d_10 = '0';
			while (d_10 <= '9')
			{
				d_11 = '0';
				do {
					if (d_10 == '0' && d_11 == '0')
						d_11++;
					if (d_00 == d_10 && d_01 == d_11)
						d_11++;
					putchar(d_00);
					putchar(d_01);
					putchar(' ');
					putchar(d_10);
					putchar(d_11);
					if ((d_00 == '9' && d_01 == '8') && (d_10 == '9' && d_11 == '9'))
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
					d_11++;
				} while (d_11 <= '9');
				d_10++;
			}
			d_01++;
		}
		d_00++;
	}
	return (0);
}
