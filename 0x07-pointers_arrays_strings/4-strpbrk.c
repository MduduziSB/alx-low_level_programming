#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first parameter
 * @accept: second parameter
 * Return: first occurence of *accept
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *tmps = s, *tmpa = accept;
		int i = 0;

		while (*tmpa != '\0')
		{
			if (*tmps == *tmpa)
			{
				i++;
				break;
			}
			tmpa++;
		}
		if (i > 0)
			return (tmps);
		s++;
	}
	return (NULL);
}

