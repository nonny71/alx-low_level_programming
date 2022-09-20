#include "main.h"

/**
 * _puts - prints a string, followed by a newline
 * @str: string parameter to print
 * Return: Nothing
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
