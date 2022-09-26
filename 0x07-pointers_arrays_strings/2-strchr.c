#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character we're looking for
 * Return: a pointer to the first occurance of the character @c in the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
		{
			return (s + i);
		}
	return ('\0');
}
