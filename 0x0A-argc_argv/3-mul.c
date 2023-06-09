#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: Always 0 (Successs)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}

