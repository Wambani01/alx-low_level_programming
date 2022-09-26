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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}

