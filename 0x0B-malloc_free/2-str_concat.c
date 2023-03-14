#include <stdio.h>
#include <stdlib.h>

/**
 * get_length - Returns the length of a string
 * @str: The string to get the length of
 *
 * Return: The length of the string
 */
int get_length(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    int i, j, size;

    size = get_length(s1) + get_length(s2);
    concatenated = malloc(sizeof(char) * (size + 1));
    for (i = 0; s1[i] != '\0'; i++)
    {
        concatenated[i] = s1[i];
    }
    for (j = 0; s2[j] != '\0'; j++)
    {
        concatenated[i + j] = s2[j];
    }
    concatenated[i + j] = '\0';
    return concatenated;
}

