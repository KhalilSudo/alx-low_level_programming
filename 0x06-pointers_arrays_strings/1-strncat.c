#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Pointer to byte.
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int len;
int i;

for (i = 0; i >= 0; i++)
{
if (dest[i] == '\0')
{
for (len = 0; src[i] != '\0' && i < n; len++)
{
dest[i + len] = src[n];
}
break;
}
}
return (dest);
}

