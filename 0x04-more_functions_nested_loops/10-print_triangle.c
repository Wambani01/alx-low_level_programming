#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of traingle
 * Return: 0 success
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			printf("\n");
		}
		else if (size > 0)
		{
			for (j = 0; j <= size; j++)
			{
				if ((i + j) <= size)
				{
					printf(" ");
				}
				else
				{
					printf("#");
				}
			}
		}
		printf("\n");
}
