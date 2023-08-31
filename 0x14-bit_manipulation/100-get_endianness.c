#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *byte = (char *)&n;


	if (*byte)
		return (1);
	else
		return (0);
}
