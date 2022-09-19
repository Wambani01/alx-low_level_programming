#include "main.h"
#include <string.h>
/**
 * puts2 - print every other character of a string
 * @str: string of characters
 * Return: 0 success
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
