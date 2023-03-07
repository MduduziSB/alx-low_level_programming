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
	int i = 0, ix = 0, count = 0, len = 0;
	char *tmp = '\0';

	while (needle[len] != '\0')
		len++;
	while (haystack[i] != '\0')
	{
		if (needle[ix] == haystack[i])
		{
			if (needle[ix] != '\0')
			{
				ix++;
				count++;
			}
		}
		else
		{
			ix = 0;
			ix = 0;
		}
		i++;
		if (ix == len)
		{
			while ((*tmp++ = *needle++) != '\0')
				;
			while (haystack[i] != '\0')
			{
				tmp[ix] = haystack[i];
				ix++;
				i++;
			}
			return ((char *)tmp);
		}
	}
	return ((char *)tmp);
}
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
