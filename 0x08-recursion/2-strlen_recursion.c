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
return (_strlen_recursion(s + 1) + 1);
}
}
