#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string being printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
