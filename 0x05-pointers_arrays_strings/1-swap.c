#include "main.h"
/**
 * swap_int - swaps two integers
 * @a @b: parameters being swapped
 * Return: 0 on successs
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
