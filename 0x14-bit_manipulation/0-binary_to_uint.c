#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: string of binary numbers
 * Return: returns the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int base = 1;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b) - 1;

	for (; len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		result += ((b[len] - '0') * base);
		base = base * 2;
	}
	return (result);
}

