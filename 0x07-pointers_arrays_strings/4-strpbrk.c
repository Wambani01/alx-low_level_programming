#include "main.h"
/**
 * *_strpbrk - locates first occurence of s character in accept
 * @s: string being checked
 * @accept: reference string
 * Return: pointer to first occurence
 */
char *_strpbrk(char *s, char *accept);\
{
	int i; j;

	for (i = 0; s[i] != 0; i++)
	{
		fo (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
	}
	return (s[i]);

}