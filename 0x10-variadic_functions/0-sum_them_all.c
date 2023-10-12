i#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n is 0, it returns 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int j, sum = 0;

	va_start(p, n);

	for (j = 0; j < n; j++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}

