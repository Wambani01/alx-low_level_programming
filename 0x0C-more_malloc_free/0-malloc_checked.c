#include "main.h"
#include <stdio.h>
void *malloc_checked(unsigned int b)
{
	b = (int *)malloc(sizeof(int));

	if (b == NULL)
	{
		exit (98);
	}
	return (b);
	free(b);
}
