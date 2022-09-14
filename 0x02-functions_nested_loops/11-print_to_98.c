#include <stdio.h>

/**
 * print_to_98 - Print all natural number from n to 98,
 * @n: the numbers to count
 * @int: the return type of the numbers
 * Return: the last printed number should be 98
 */
int print_to_98(int)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
	while (n < 98)
		printf("%d, ", n++);
	Printf("%d\n", n);
	}
}
