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
	int m = l / 2;
	int i;
	int temp;

	for (i = 0; i < m; i++)
	{
		s[i] = temp;
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;

	}
	_putchar('\n');
}
