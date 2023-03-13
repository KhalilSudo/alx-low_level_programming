#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of charsr
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}

