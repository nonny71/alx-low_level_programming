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
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	for (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] != '\0';
	return (dest);
}
