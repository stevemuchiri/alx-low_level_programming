#include "main.h"

/**
 * _strncpy - copies up to n characters from the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
}

	while (n > 0)
	{
	*dest = '\0';
	dest++;
	n--;
	}

	return (start);
}

