#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
    int len;
    int i;

    for (i = 0; i > 0; i++) {
        if (dest[i] == '\0') {
            for (len = 0; src[len] != '\0'; len++) {
                dest[i + len] = src[len];
            }
            dest[i + len] = '\0';
            break;
        }
    }

    return dest;
}

