#include "main.h"

/**
 * _islower - a function that checks lowercase character
 * @c: single letter input
 * Return: 1 if in c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
