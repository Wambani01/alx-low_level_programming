#include "main.h"
/**
 * *_strcpy - copy one string to another
 * @dest: parameter
 * @src: parameter
 * Return: 0 success
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != 0; i++)
	{
		src[i] = dest[i];
	}
	dest[i] = '\0';

	return (*dest);
}
