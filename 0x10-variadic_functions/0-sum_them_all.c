#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n is 0, it returns 0.
 *         Otherwise, it returns the sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list uv;
	unsigned int i, sum = 0;

	va_start(uv, n);

	for (i = 0; i < n; i++)
		sum += va_arg(uv, int);

	va_end(uv);

	return (sum);
}

