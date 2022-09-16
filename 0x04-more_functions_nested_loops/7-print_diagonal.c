#include "main.h"

/**
 * print_diagonal - print a diagnal line.
 * @n: number of times line is being printed
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int i, p;

	if (n <= 0)
	{
		_putchar('\n');
	}

	if  (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (p = 0; p < i; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
