#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return;
	}

	count = count + _strlen_recursion(s + 1);
	return count ;
