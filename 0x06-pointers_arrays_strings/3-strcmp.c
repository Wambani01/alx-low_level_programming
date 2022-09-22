#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, 1 is s1>s2, -1 s2>s1
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int value;
	i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			value = 0;
		}
		if (s1[i] > s2[i])
		{
			value = 1;
		}
		if (s2[i] > s1[i])
		{
			value = -1;
		}
		i++;
	}
	return (value);
}
