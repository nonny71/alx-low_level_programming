#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c - the character to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
