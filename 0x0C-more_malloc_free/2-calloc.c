#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: size of each element
 * Return: pointer to the assigned memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int total_bytes = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_bytes = nmemb * size;

	ptr = malloc(total_bytes);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			*(ptr + i) = 0;
		}
	}
	return (ptr);
	free(ptr);
}
