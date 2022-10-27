#include "main.h"
/**
 * print_listint - print elements of a linked list
 * @h: pointer to the list
 * Return: nu,mber of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h = NULL)
	{
		return (NULL);
	}

	while (h != NULL)
	{
		count++;
		printf("%d", h->n);
		h = h->n;
	}
	return (count);
}
