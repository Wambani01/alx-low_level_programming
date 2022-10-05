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
	int i = 0;
	int j = 0;

	matrix = malloc(sizeof(int *) * height);

	if (height == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int *) * width);
		if (width == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
