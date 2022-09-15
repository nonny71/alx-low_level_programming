#include "main.h"

/**
 * Print_alphabet_x10 - a function that print 10 times the alphabet in lowercase
 * 
 */
void print_alphabet_x10(void)
{
	int n, m;

	m = 0;

	while (m < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		m++;
		_putchar('\n');
	}
}
