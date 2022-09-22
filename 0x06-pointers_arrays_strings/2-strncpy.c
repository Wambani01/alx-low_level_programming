#include "main.h"
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

	if (n < len2)
	{
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
	}
	else if (n >= len2)
	{
		for (n = 0; n <= len2; n++)
			dest[len1 + n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
