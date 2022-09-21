#include "main.h"

/**
 * strcat - Concatenates the string pointed
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended
 * Return: A pointer to the destination string
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
