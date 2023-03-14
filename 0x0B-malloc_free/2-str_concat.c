/**
 * getLength - Returns the length of a string
 * @str: The string to get the length of
 *
 * Return: The length of the string
 */
int getLength(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* do nothing */
	}
	return (i);
}

/**
 * str_concat - Concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * If s1 or s2 is NULL, treat it as an empty string.
 *
 * Return: A pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	char *concatenated;
	int i, j, size;

	size = getLength(s1) + getLength(s2);
	concatenated = malloc(sizeof(char) * (size + 1));
	if (concatenated == NULL)
	{
		free(concatenated);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[i + j] = '\0';
	return (concatenated);
}

