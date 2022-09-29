#include "main.h"

/**
 * helper - finds square root of two numbers
 * @a: the number
 * @b: the number to test @a's square root
 * Return: square root
 */

int helper(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (helper(a, b + 1));
	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: the number to get the square root for
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
