#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	return (start);
}

