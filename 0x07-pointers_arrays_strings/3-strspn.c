#include "main.h"
/**
 * _strspn - strspn
 * @s: string being checked
 * @accept : reference string
 * Return: length of charcaters from accept contained in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
			}
		}
	}
	return (len);
}
