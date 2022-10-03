#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *new_string;

	new_string = malloc(sizeof(char) * (len1 + len2));

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		s1[len1 + i] = s2[i];
	}
	new_string = s1;
	return (new_string);
}
