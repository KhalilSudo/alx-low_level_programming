#include "main.h"

/**
 * _strlen_recursion - prints a length of string
 *
 * @s: string
 *
 * Return: int length of string
*/

int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }
    else
    {
        // Make a recursive call to _strlen_recursion with the next
        // character in the string, and add 1 to the result to get the
        // total length of the string.
        return (_strlen_recursion(s + 1) + 1);
    }
}
