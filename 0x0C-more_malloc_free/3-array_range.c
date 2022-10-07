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
	int diff;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		diff = max - min + 1;
		ptr = malloc(sizeof(int) * diff);
	}

	for (i = 0; i < diff; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
	free(ptr);
}

