#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: string of binary numbers
 * Return: returns the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int base = 1;
	int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b);

	while (len)
	{
		if (b[len] != '1' || b[len] != '0')
		{
			return (0);
		}
		if (b[len] == '1')
		{
			result += base;
		}
		base *= base;
	}
	return (result);
}

