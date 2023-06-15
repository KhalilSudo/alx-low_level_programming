#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that allocates memory for an array, using malloc
 * @min: min number in array
 * @max: max number in array
 *
 * Return: Pointer to the allocated memory
 *         NULL if min > max, or if malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min + 1) * sizeof(int)));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max ; i++, min++)
		ptr[i] = min;

	return (ptr);
}

