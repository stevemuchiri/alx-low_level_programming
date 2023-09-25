#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: starting address of the memory to be  filled
 * @b: requred  value
 * @n: bytes changed
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
