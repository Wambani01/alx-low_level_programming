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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

