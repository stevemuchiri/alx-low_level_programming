#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s : The string to get the length of.
 *
 * Return: The length of @s.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
