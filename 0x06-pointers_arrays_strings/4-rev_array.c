#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
		printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}

