/**
 * int_index - Searches for an integer in an array.
 *
 * @array: The array to search.
 * @size: The size of the array.
 * @cmp: A pointer to a function that takes an int argument and returns an int.
 *
 * Return: The index of the first element for which cmp does not return 0,
 * or -1 if no elements match or size <= 0.
 */
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}