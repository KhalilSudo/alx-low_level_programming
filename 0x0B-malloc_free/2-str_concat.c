#include "stdlib.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the newly allocated memory space containing the
 * concatenation of the strings, or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, lens1 = 0, lens2 = 0, fulllen = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		lens1++;

	for (j = 0; s2[j] != '\0'; j++)
		lens2++;

	fulllen = lens1 + lens2;
	ptr = malloc((fulllen + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < lens2; j++)
		ptr[len1 + j] = s2[j];

	ptr[fulllen] = '\0';
	return (ptr);
}
