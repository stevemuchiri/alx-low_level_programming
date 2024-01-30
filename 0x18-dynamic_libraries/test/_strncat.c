#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to concatenate
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
	n--;
	}
	*dest = '\0';

	return (start);
}

