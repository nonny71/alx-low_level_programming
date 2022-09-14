#include "main.h"

/**
 * times_table - print the 9 times table starting from 0.
 */
void times_tables(void)
{
	int num, multi, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (multi = 0; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
