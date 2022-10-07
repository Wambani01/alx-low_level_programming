#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates and array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer to the created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(int) * (max - min));
	}

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = (min + i);
	}
	return (ptr);
	free(ptr);
}

