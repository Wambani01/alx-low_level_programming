#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index- searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer for function doing the comparison
 * Return: 0 on sucess, -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (-1);
}
