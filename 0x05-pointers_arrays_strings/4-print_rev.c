#include "main.h"
#include <string.h>
/**
 * print_rev - prints a function in reverse
 * @s: string being reversed
 * Return: 0 success
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++)
	{
		for (len = len - 1; len >= 0; len--)
		{
			_putchar(s[len]);
		}

	}
	_putchar('\n');
}
