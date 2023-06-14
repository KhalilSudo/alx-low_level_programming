/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: pointer to array, or NULL if size is 0 or if memory allocation fails
 */

#include "stdlib.h"
char *create_array(unsigned int size, char c)
{
    char *ptr;
    unsigned int i;

    ptr = malloc(size * sizeof(char));
    if (ptr == NULL)
    {
        return (NULL);
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            ptr[i] = c;
        }
    }

    return (ptr);
}