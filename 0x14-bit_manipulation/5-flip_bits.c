#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * @n: source number
 * @m: target number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diffe = n ^ m;
	unsigned int flipbits = 0;

	while (differ)
	{
		flipbits += differ & 1;
		differ >>= 1;
	}

	return (flipbits);
}
