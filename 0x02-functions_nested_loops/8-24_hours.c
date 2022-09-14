#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 *             Jack Bauer, starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int hour, minuite;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minuite = 0; minuite <= 59; minuite++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minuite / 10) + '0');
			_putchar((minuite % 10) + '0');
			_putchar('\n');
		}
	}
}
