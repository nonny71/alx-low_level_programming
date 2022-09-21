#include "main.h"

/**
 * strcat - Concatenates the string pointed
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended
 * Return: A pointer to the destination string
 */
char *strcat(char *dest, const char *src)
{
	int l1, l2, i;
	
	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0; i <= l2; i++)
	{
		dest[l2 + i] = src[i];
	}
	return (dest);
}
