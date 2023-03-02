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
	
    for (src_length = 0; src[src_length] != '\0'; src_length++)
		;
	
    for (i = 0;i < n && i < src_length; i++)
		dest[i] = src[i];
	
    for ( ; i < n; i++)
		dest[i] = '\0';
	
    return dest;
}

