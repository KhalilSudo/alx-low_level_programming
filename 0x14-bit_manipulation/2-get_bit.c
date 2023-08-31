#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * Return: 1, 0, or -1 if index is out of range
 * @n: number to search in
 * @index: index of the bit (0 to 63)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
