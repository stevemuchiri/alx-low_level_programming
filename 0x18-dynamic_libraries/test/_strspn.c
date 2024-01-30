#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: the number of characters in the initial segment of s which consist
 * only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}

