#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
int result = 0;

if (argc != 3)
{
	printf("Error\n");
	return (1);
} else
{
	result = argv[1] * argv[2];
	printf("%d", result);
}
return (0);
}
