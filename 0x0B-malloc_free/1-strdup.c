#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string in memory
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
	int strlength;
	char *strcopie = NULL;
	int i;

	if (str == NULL)
		return (NULL);

	for (strlength = 0; str[strlength] != '\0'; strlength++)
		;

	strcopie = malloc(sizeof(char) * (strlength + 1));

	if (strcopie == NULL)
		return (NULL);

	for (i = 0; i <= strlength; i++)
		strcopie[i] = str[i];

	return (strcopie);
}

