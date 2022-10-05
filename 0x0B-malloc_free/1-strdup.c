#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strdup - returns string pointer to the parameter copy
 * @str: parameter string
 * Return: string pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	int n;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		n = strlen(str) + 1;
	}

	dest = malloc(sizeof(char) * n);

	if (dest == NULL)
	{
		return (NULL);
	}

	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
	free(dest);
}
