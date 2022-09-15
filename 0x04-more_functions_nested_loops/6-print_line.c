#include "main.h"

/**
 * print_line - print a line
 * @n: number of times n is printed
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
