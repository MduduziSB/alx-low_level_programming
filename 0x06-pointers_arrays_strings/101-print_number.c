#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: parameter
 * Return: always 0 (success)
 */
void print_number(int n)
{
        unsigned int num = 0;
        int i = 0, count = 0;

	if (n < 0)
		num = -n;
	else
		num = n;
	do {
		count++;
		num /= 10;
	} while (num > 0);
	num = n;
	if (num >= 0 && num <= 9)
		putchar(num + '0');
	else if (num >= -9 && < 0)
	{
		putchar('-');
		putchar((-1 * num) + '0');
	}
	else if (num >= 10)
	{
		int s[40];
		while (count > 0)
		{
			s[count] = num % 10;
			num = num - num % 10;
			num = num / 10;
			count--;
			i++;
		}
		s[count] = 0;
		while (i > 0)	

        while (s[i] != '\0')
        {
                if (s[i] == '-')
                        count++;
                if (s[i] >= '0' && s[i] <= '9')
                {
                        num = num * 10 + (s[i] - '0');
                        if (s[i + 1] > '9' || s[i + 1] < '0')
                                break;
                }
                i++;
        }
        if (count % 2 == 0)
                return (num);
        else
                return (-num);
}

