#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * This function generates a random integer and prints the value ofitsastdigit,
 * along with a message indicating whether the last digit is greater than 5, 0,
 * or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 97; n < 123; n++)
if (n != 101 && n != 113)
{
putchar(n);
}
putchar('\n');
return (0);
}
