#include "main.h"
/**
 * _strlen_recursion - returns lenth of a string
 * @s: string being checked
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		_strlen_recursion(*s);
		s++;
		return (s);
	}
	else
	{
		return (0);
	}
}
