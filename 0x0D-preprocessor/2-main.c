#include <stdio.h>

/**
 * File: 2-main.c
 * main - Prints the name of the file of the program
 *	was compiled from, followed by a new line
 * Return:always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
