/**
 * print_name - Calls a function that prints a name.
 *
 * @name: The name.
 * @f: A pointer to a function that takes a char*  and returns void.
 */

#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
f(name);
}
