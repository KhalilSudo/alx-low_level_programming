#include "main.h"

/**
 * _print_rev_recursion(char *s) - prints a string using recursion in reverse
 * @s: the string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
        return ;
	}
	else
	{
		_print_rev_recursion(s + 1);
        _putchar(*s);
	}
}
