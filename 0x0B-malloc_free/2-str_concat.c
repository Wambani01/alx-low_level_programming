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
	int index = 0;
	int total_length;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		total_length++;
	}

	dest = malloc(sizeof(char) * total_length);
	if (dest == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < s1[i]; i++)
	{
		dest[index++] = s1[i];
	}
	for (i = 0; i < s2[i] + 1; i++)
	{
		dest[index++] = s2[i];
	}
	return (dest);
	free(dest);
}
