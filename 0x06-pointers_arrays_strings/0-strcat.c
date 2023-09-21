#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int i, r;

i = 0;
r = 0;

while (dest[i] != '\0')
{
	i++;
}

while (src[r] != '\0')
{
	dest[i] = src[r];
	i++;
	r++;
}
dest[i] = '\0';
return (dest);
}
