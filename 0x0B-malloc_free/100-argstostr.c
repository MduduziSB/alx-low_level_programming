#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		len += strlen(av[i]);
		i++;
	}
	s = malloc((len + ac) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (j < ac)
	{
		char *ptr = av[j];

		while (*ptr)
		{
			s[i] = *ptr;
			ptr++;
			i++;
		}
		s[i] = '\n';
		if (j < ac - 1)
			i++;
		j++;
	}
	return (s);
}

