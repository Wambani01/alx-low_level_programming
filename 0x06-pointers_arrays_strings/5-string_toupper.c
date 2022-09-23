#include "main.h"
/**
 * string_toupper - change lowercase to upper
 * @s: string to make uppercase
 * Return: uppercase letters
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	s[i] = '\0';
	return (s);
}
