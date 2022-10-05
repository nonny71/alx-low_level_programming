#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string
 * @ac: The number of arguments passed to the program
 * @av: An array of pointers to the arguments
 * Return: If ac == 0, av == NULL, or the function fails - NULL
 *	Otherwise - a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg;
	int byte;
	int index = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte] != '\0'; byte++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		return ('\0');
	}

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte] != '\0'; byte++)
		{
			str[index++] = av[arg][byte];
		}
		str[index++] = '\n';
	}
	str[size] = '\0';
	return (str);

}
