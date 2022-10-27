#include "lists.h"
/**
 * print_listint - print elements of a linked list
 * @h: pointer to the list
 * Return: nu,mber of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
