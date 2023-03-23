#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j = 0, sum  = 0;
	va_list ap;

	va_start(ap, n);
	if (!n)
		return (0);
	while (j < n)
	{
		sum += va_arg(ap, int);
		j++;
	}
	va_end(ap);
	return (sum);
}

