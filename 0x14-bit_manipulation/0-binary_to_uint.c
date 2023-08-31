#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary string
 * Return: the converted unsigned int, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b == '0' || *b == '1')
		{
			output <<= 1;
			output += *b - '0';
		}
		else
		{
			return (0);
		}
	}

	return (output);
}
