#include "main.h"
/**
 * _strspn - strspn
 * @s: string being checked
 * @accept : reference string
 * Return: length of charcaters from accept contained in s
 */
unsigned int _strspn(char *s, char *accept);
{
	int i;
	unsigned int j = 0;

	for (i = 0; s[i] != '\0' || accept[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
			j++;
	}
	return (j);
}
