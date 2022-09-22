#include "main.h"
/**
 * *cap_string - capitalize all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == ' ', ',', '.', '\t', '\n', ';',
					'!', '?', '"', '(', ')', '{', '}');
			{
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

