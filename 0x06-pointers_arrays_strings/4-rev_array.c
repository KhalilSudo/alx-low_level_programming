#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		start++;
		end--;
	}
}

