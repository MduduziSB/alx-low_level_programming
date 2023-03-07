#include <stdio.h>
#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: first parameter
 * @needle: second parameter
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *mn = needle, *mh = haystack;

		while (*mh == *mn && *mn != '\0')
		{
			mh++;
			mn++;
		}
		if (*mn == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}

