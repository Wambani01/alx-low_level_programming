#include "main.h"
/**
 * *cap_string - capitalize all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;
	char p[13] = {' ', ',', '.', '\t', '\n', ';','!', '?', '"', '(', ')', '{', '}'};
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i] == p[j])
			{
				for (j = 0; j < 13; j++)
				s[i] = s[i] - 32;
			}
			else
			{
				s[i] = s[i];
			}
		}
	}
	return (s);
}

