#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strstr - find first occurence of a substring
 * @haystack: string being checked
 * @needle: reference string
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	int len1 = strlen(haystack);
	int len2 = strlen(needle);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (haystack[i] = needle[j])
					break;
		}
		return (haystack + i);
	}
	return (NULL);
}
