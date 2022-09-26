#include "main.h"
/**
 * *_memset - memset
 * @s: string array
 * @b: char being assigned to memory
 * @n: number of  bytes being used
 * Return: Array pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	retun(s);
}
