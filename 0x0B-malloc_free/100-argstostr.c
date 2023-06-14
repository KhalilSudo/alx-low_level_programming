#include "stdlib.h"

/**
 * argstostr - concatenates two strings
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the newly allocated memory space containing the
 * concatenation of the strings, or NULL if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, lens = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= ac; i++)
	{
		for (j = 0; av[i] != '\0'; j++)
			lens++;
	}

	ptr = malloc((lens + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av+1) != '\0'; j++)
			ptr[j] = av[i];
	}

	ptr[lens] = '\0';
	return (ptr);
}
