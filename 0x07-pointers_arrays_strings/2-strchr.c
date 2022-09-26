#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locate character in a string
 * @s: pointer to string in question
 * @c : charcater to be located
 * Return: pointer first occurence of c, otherwise null
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*s != '\0')
	{
		if (*s == c)
			return (str);
		s++;
	}
	return (0);
}

