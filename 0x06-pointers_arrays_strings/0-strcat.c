#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int len;
int i;

for (i = 0; i >= 0; i++)
{
if (dest[i] == '\0')
{
for (len = 0; src[len] != '\0'; len++)
{
dest[i + len] = src[len];
}
dest[i + len] = '\0';
break;
}
}
return (dest);
}

