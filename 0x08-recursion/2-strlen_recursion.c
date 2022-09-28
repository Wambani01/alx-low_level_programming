#include "main.h"
/**
 * _strlen_recursion - returns lenth of a string
 * @s: string being checked
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i;
	if (*s != 0)
	{
		_strlen_recursion(s + 1);
		i++;
		return (i);
	}
}
