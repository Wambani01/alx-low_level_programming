#include "main.h"

/**
 * print_sign - function to check for a sign of a number
 * @n:  is the int that will use for the argument of the function
 * Return: 1 for postive, 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(-1);
		return (-1);
	}
}
