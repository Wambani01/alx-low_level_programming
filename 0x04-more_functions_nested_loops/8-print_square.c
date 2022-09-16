#include "main.h"
/**
 * print_square - print a square
 * @size: size of the square being printed
 * Return: 0 success
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i > size; i++)
		{
			for (j = 0; j > i; j++)
			{
				_putchar('#');
			}
		}
	}
	else
		_putchar('\n');
}
