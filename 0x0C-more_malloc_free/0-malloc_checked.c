#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory to allocate
 *
 * Return: pointer to the allocated memory
 *         exits with status code 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
    int *ptr = malloc(b);

    if (ptr == 0)
    {
        exit(98);
    }

    return (ptr);
}

