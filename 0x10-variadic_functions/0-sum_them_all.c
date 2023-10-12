#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list up;
	unsigned int i;
       	int sum = 0;

	va_start(up, n);

	for (i = 0; i < n; i++)
		sum += va_arg(up, int);

	va_end(up);

	return (sum);
}

