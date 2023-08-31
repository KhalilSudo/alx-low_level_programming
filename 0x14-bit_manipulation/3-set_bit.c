#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 * Return: 1 if success, 0 if error
 * @n: number to change
 * @index: index of bit to set
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (0);


	*n |= (1UL << index);

	return (1);
}
