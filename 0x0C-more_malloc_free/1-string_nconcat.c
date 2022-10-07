#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *string_nconcat - concateates two strings
 * @s1: first string
 * @s2: second string
 * @n: nu,ber of bytes of s2 being used
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int s1_length, s2_length, total_length;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	if (n >= s2_length)
	{
		n = s2_length;
	}
	total_length = s1_length + n + 1;
	ptr = malloc(sizeof(char) * total_length);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		j = 0;
		for (i = 0; i < s1_length; i++)
		{
			ptr[j++] = s1[i];
		}
		for (i = 0; i < n; i++)
		{
			ptr[j++] = s2[i];
		}
		ptr[j++] = '\0';
	}
	return (ptr);
	free(ptr);
}
