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
	unsigned int i;
	char *ptr;

	n = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < n)
	{
		ptr[i] == str[i];
		i++;
	}
	return (ptr);
}
