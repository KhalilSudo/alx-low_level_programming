#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary string
 * Return: the converted unsigned int, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int output = 0;

	while (*b)
	{
		if (*b == '1')
			output = (output << 1) | 1;
		else if (*b != '0')
			return (0);

		b++;
	}

	return (output);
}
