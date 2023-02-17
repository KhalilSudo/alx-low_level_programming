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

for (n = 0; n < 10; n++)
putchar(n + '0');
printf("\n");
return (0);

}
