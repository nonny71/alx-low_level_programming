#include "main.h"
#include <stdio.h>

/**
 * main - print the sum of even fibonacci number
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fsum;
	float sum;

	while(1)
	{
		fsum = f1 + f2;
		if (fsum > 4000000)
			break;
		if ((fsum % 2) == 0)
			sum += fsum;
		f1 = f2;
		f2 = fsum;
	}
	printf("%.0f\n", sum);
	return (0);
}
