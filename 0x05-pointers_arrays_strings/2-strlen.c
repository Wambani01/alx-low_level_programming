#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: pointer to the string
 * Return: returns length of a string
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
