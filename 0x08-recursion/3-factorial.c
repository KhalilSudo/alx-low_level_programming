#include "main.h"

/**
 * factorial - return factorial
 *
 * @n: int
 *
 * Return: return factorial
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else
{
return (factorial(int n - 1));
}
}
