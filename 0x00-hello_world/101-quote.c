#include <unistd.h>

/**
 * main - Print that piece of art is useful
 *
 * Return: Always 1
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpa, 2015-10-19\n",
		59);

	return (1);
}
