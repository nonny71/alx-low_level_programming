#include "main.h"

/**
 * strcat - Concatenates the string pointed
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended
 * Return: A pointer to the destination string
 */
char *strcat(char *dest, const char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j++]
	}
	return (dest);
}
