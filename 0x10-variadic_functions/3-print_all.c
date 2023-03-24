#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: charecter
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	char *space = "", *ptr;
	int i = 0;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(ap, double));
					break;
				case 'i':
					printf("%s%d", space, va_arg(ap, int));
					break;
				case 's':
					ptr = va_arg(ap, char *);
					if (ptr == NULL)
						ptr = "(nil)";
					printf("%s%s", space, ptr);
					break;
				default:
					i++;
					continue;
			}
			space = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
