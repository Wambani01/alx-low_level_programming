#include "main.h"
#include <stdio>
/**
 * *_memset - memset
 * @s: string array
 * @b: char being assigned to memory
 * @n: number of  bytes being used
 * Return: Array pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (while n > 0)
	{
		s[i] = 'b';
		i++;
		n--;
	}
	retun (s);
}
