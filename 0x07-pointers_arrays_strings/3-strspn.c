#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, count = 0, k;

	while (s[i] != '\0')
	{
		k = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				k++;
			}
			if (accept[j + 1] == '\0' && k == 0)
				return (count);
			j++;
		}
		i++;
	}
	return (count);
}

