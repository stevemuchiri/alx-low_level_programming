#include "main.h"

/**
  * _strncpy - The main function of the code
  *
  * @src: Function parameter
  *
  * @dest: Function parameter
  *
  * @n: Function parameter
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
int k = 0;

while (k < n && src[k] != '\0')
{
dest[k] = src[k];
k++;
}
while  (k < n)
{
dest[k] = '\0';
k++;
}
return (dest);
}

Task 3

#include "main.h"

/**
  * _strcmp - The main function
  *
  * @s1: Function parameter
  *
  * @s2: Function parameter
  *
  * Return: s1, s2
  */
int _strcmp(char *s1, char *s2)
{
int k = 0;

while (s1[k] != '\0' && s2[k] != '\0')
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
}
k++;
}
return (0);
}
