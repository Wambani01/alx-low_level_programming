#include "main.h"
#include <stdio.h>
/**
 * print_array - print values in an array
 * @a: input value
 * @n: input value
 * Return: 0 success
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
