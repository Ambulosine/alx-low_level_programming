#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>

/**
  * sum_them_all - add all the passed arguments
  * @n: the number of arg passed
  * Return: the sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	unsigned int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
