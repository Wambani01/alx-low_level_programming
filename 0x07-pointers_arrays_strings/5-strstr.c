#include "main.h"
/**
 * _strstr - find first occurence of a substring
 * @haystack: string being checked
 * @needle: reference string
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	len1 = strlen(haystack);
	len2 = strlen(needle);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[i]
					break;
			if (j == len2)
				return (haystack);
		}
	}
	return (0);
}
