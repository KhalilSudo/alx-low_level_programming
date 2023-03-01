#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 char *_strncat(char *dest, char *src, int n);
 
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

char *_strncat(char *dest, char *src, int n)
{
int len;
int i;

for (i = 0; i >= 0; i++)
{
if (dest[i] == '\0')
{
for (len = 0; src[i] != '\0' && i < n; len++)
{
dest[i + len] = src[len];
}
break;
}
}
return (dest);
}

