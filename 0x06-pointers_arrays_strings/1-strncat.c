#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, r;

	i = 0;
	r = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (r < n && src[r] != '\0')
	{
	dest[i] = src[r];
	i++;
	r++;
	}
	dest[i] = '\0';
	return (dest);
}
