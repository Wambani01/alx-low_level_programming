#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - assigns memory space
 * @b: parametr being assigned space
 * Return: returns void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
