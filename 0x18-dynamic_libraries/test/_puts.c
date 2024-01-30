#include "main.h"

/**
 * _puts - function that outputs a string
 * @s: the string to output
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
	write(1, s, 1);
	s++;
	}
	write(1, "\n", 1);
}

