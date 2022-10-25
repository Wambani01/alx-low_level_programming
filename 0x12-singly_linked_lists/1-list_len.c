#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - number of elements in a linked list
 * @h: pointer to structure
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
