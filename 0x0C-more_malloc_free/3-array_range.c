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
	int *ptr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max * sizeof(int);
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		j++
		ptr[i] = i;
	}

	return (ptr);
}

