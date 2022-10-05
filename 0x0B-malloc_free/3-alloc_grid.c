#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d int array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;

	matrix = malloc(sizeof(int *) * height);

	if (height == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int *) * width)
		if (width == NULL)
		{
			return (NULL);
		}
	}
	return (matrix);
}
