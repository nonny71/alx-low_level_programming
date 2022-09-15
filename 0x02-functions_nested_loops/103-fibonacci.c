#include "main.h"
#include <stdio.h>

/**
 * main - print the sum of even fibonacci number
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	long b, c = 2, sum = c;

	while (c + b < 4000000)
	{
		c += b;
		if (c % 2 == 0)
			sum += c;
		b = c - b;

		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
