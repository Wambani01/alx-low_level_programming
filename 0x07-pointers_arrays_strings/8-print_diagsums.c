#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagnals
 * @a: pointer to array of arrays
 * @size: order of the array
 * return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int pdsum = 0;
	int sdsum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				pdsum = pdsum + a[i][j];
			if (i + j == size - 1)
				sdsum = sdsum + a[i][j];
		}
	}
	printf("primary diagnal is: %d, ", pdsum);
	printf("secondary diagnal is: %d\n", sdsum);
}
