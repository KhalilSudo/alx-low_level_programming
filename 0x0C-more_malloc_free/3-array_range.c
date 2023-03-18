#include "main.h"
#include <stdlib.h>

/**
 * array_range - range array from min to max
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: A pointer to the allocated memory
 *         or NULL if min > max or
 *         if malloc fails
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}

