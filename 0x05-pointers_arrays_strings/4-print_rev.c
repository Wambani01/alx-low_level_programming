#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a function in reverse
 * @s: string being reversed
 * Return: 0 success
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(s[len]);
	putchar(10);
}
