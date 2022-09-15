#include "main.h"

/**
 * print_line - print a line
 * @n: number of times n is printed
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n--)
	{
		_putchar('_');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
