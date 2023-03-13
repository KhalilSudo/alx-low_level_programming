#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with a char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array of chars.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	
		ar[0] =' c';

	return (ar);
}

