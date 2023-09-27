#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 *
 * @s: A pointer to  null-terminated string for which the length is calculated
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s)
	{
		t++;
		t += _strlen_recursion(s + 1);
	}

	return (t);
}
