#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Output a sequence of numbers, separated by a
 * given string, and followed by a new line.
 * @separator: The string to be placed between the numbers.
 * @n: The count of integers passed to the function.
 * @...: A variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int index;

	va_start(p, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_ar(p, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(p);
}
