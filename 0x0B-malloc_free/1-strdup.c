#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns string pointer to the parameter copy
 * @str: parameter string
 * Return: string pointer
 */
char *_strdup(char *str)
{
	int i = 0;
	int n = strlen(str) + 1;

	if (str == NULL)
	{
		return (NULL);
	}

	char *dest = malloc(sizeof(char) * n);

	if (dest == NULL)
	{
		return (NULL);
	}

	while (dest > n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
	free (dest);
}
