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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}

