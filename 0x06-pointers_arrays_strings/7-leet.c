#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Input string
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	char enc[] = {'4', '3', '0', '7', '1'};
	char c[] = {'a', 'e', 'o', 't', 'l'};

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; enc[j] != '\0'; j++)
		{
			if (str[i] == c[j] || str[i] == c[j] - 32)
			{
				str[i] = enc[j];
			}
		}
	}

	return (str);
}

