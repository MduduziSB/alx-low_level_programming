#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number of parameters
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			if (separator == NULL)
				printf("%d", va_arg(ap, int));
			else
			{
				if (i == n - 1)
					printf("%d", va_arg(ap, int));
				else
					printf("%d%s", va_arg(ap, int), separator);
			}
			i++;
		}
		va_end(ap);
		printf("\n");
	}
}

