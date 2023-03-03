#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 *
 * Return: Negative integer, zero, or positive integer if s1 is less than,
 * equal to, or greater than s2, respectively.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}

