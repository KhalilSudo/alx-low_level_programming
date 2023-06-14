#include "stdlib.h"

/**
 * _strdup - creates a duplicate of a string
 * @str: string to duplicate
 *
 * Return: pointer to the newly allocated memory space containing the copy of
 * the string, or NULL if str is NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int strlength = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		strlength++;
	}

	ptr = malloc((strlength + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
		ptr[i] = '\0';
	}

	return (ptr);
}
