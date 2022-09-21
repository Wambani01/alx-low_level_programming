#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = strlen(dest);

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
