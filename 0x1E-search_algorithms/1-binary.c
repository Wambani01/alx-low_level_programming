#include "search_algos.h"

/**
* binary_search - a function to perform binary search
* @array: pointer to the first element
* @size: size of the array
* @value: the value to search
* Return: -1 on failure, the index on success
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i, mid;

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i < right; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[right]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
