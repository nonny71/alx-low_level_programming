#include "main.h"

/**
 * factorial - finding factorial of n
 * @n: given number
 * Return: factorial of number, -1 if negative n
 */
int factorial(int n);
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
