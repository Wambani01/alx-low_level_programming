#include "main.h"

/**
 * jack_bauer - print all the minutes in 24 hours
 *
 * @h@m: integer variable for hours and minutes
 *
 *
 *
 * Return: 0 for success
 */

void jack_bauer(void)
{
	int h, m;
	{
		for (h = 0; h < 24; h++)
		{
			for (m = 0; m < 60; m++)
			{
				_putchar((h / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar(':');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
