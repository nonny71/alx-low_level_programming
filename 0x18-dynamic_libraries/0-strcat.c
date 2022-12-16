#include "main.h"

/**
 * strcat - Function to concatenates the string pointed
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended
 * Return: A pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;

	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
