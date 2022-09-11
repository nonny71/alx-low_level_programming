#include <stdio.h>

/**
 *main - print the alphabet in lowercase,except e and q
 *
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'p')
			putchar(letter);
	}

	putchar(letter);
	return (0);
}
