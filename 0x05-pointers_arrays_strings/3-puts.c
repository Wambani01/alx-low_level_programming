#include "main.h"
/**
 * _puts - prints a string to stdo
 * @str: string being printed
 * Return: 0 success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}
