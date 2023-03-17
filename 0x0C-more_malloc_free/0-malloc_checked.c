#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *  * malloc_checked - allocates memory using malloc
 *   *
 *    * @b: amount of bytes
 *     *
 *      * Return: pointer to our new allocated memory
 *       *         exit with 98 if malloc fails
 **/

void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
