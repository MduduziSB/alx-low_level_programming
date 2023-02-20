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
					if (d_00 == '9' && d_01 >= '3')
					{
						d_10 = '9';
						if (d_01 == '3' && d_11 < '5')
							d_11 = '5';
						if (d_01 == '4' && d_11 < '5')
							d_11 = '5';
						if (d_01 == '5' && d_11 < '6')
							d_11 = '6';
						if (d_01 == '6' && d_11 < '7')
							d_11 = '7';
						if (d_01 == '7' && d_11 < '8')
							d_11 = '8';
						if (d_01 == '8' && d_11 < '9')
							d_11 = '9';
					}
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
