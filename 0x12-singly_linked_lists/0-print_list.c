#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		const list_t *ptr = NULL;

		ptr = h;

		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
	}
	return (count);
}