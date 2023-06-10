#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * isNumber - check if string array is number
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
 */
int isNumber(const char *num)
{
	while (*num != '\0')
	{
		if (!isdigit(*num))
			return (1);
		num++;
	}
	return (0);
}

/**
 * main - a program that adds positive numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isNum(argv[i]) == 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

