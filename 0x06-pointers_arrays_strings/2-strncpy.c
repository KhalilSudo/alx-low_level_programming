#include "main.h"

/**
 * _strncpy - Copy a string up to n bytes.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Number of bytes to copy.
 * Return: Pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int src_length, i;
	
    for (i = 0;i < n && src[src_length] != '\0'; i++)
		dest[i] = src[i];
	
    for ( ; i < n; i++)
		dest[i] = '\0';
	
    return dest;
}

