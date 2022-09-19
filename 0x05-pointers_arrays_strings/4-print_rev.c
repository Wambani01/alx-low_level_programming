#include "main.h"
#include <string.h>
/**
 * print_rev - prints a function in reverse
 * @s: string being reversed
 * Return: 0 success
 */
void print_rev(char *s[])
{
	int l = strlen(s);
	int i;
	char temp;

	for (i = 0; i <= (l / 2); i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
		_putchar(s[i]);

	}
	_putchar('\n');
}
