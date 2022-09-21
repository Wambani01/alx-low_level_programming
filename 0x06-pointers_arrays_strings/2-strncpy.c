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
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
