#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_strings - prints strings followed by newline
 * @separator: string
 * @n: number of parameters
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	if (n != 0)
	{
		while (i < n)
		{
			char *ptr = va_arg(ap, char *);

			if (ptr == NULL)
				printf("(nil)");
			else
				printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
		printf("\n");
	}
}

