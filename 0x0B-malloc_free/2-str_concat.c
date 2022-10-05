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
	int i = 0;
	int s1_length;
	int s2_length;
	int n;
	char *dest;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		s1_length = strlen(s1);
		s2_length = strlen(s2);
		n = s1_length + s2_length + 1;
	}

	dest = malloc(sizeof(char) * n);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_length; i++)
	{
		dest[i] = s1[i];
	}
	for (i = 0; i < s2_length + 1; i++)
	{
		dest[s1_length + i] = s2[i];
	}
	return (dest);
	free(dest);
}
