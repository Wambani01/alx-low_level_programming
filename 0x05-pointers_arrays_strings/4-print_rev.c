#include "main.h"
#include <string.h>
/**
 * print_rev - prints a function in reverse
 * @s: string being reversed
 * Return: 0 success
 */
void print_rev(char *s)
{	
	int l = strlen(s);
	int i = 0;

	while (l--)
	{
		_putchar(s[i]);
		i++;

	}
	_putchar('\n');
}
