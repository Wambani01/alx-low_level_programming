#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string being reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	char temp;
	int i;
	int l = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;

		return (s);
	}
	_putchar('\0');
}
