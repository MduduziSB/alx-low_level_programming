#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: parameter
 * Return: 0 (failure) integer (success)
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int i = 0, count = 0;

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

