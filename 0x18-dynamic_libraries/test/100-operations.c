#include "100-operations.h"

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference of the two integers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of the two integers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The result of the division
 */
int div(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a / b);
}

/**
 * mod - Computes the modulo of two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The modulo of the two integers
 */
int mod(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a % b);
}

