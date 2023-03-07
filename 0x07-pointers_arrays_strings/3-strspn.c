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
	unsigned int i = 0, j, count = 0, k = 0, ix;

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (accept[j] != '\0')
		{
			if (j > 0)
			{
				ix = j - 1;
				while (ix >= 0)
				{
					if (accept[ix] == accept[j])
					{
						j++;
						break;
					}
					ix--;
				}
			}
			if (s[i] == accept[j])
			{
				count++;
				k++;
			}
			j++;
		}
		if (k == 0 && accept[j] == '\0')
			return (count);
		i++;
	}
	return (count);
}
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
