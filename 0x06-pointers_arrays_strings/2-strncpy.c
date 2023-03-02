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
	int j;

	for (j = 0; j < n && dest[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	
		dest[j] = '\0';
	

	return (dest);
}

