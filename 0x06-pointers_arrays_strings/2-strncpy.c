#include "main.h"
#include <string.h>
/**
 * *_strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: counter
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len1 = strlen(dest);
	int len2 = strlen(src);
	int i;
	int j;

	if (n < len2)
	{
	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
	}
	else if (n >= len2)
	{
		for (j = 0; j <= n; j++)
			dest[len1 + j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}