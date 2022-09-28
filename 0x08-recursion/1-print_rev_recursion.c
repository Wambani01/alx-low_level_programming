#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string being printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(*s);
	}
	else
	{
		_putchar('\n');
	}
}
