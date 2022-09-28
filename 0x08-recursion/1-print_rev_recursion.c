#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string being printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	if (*s != '\0')
	{
		_putchar(s[len]);
		len--;
		_print_rev_recursion(s[len]);
	}
	else
	{
		_putchar('\n');
	}
}
