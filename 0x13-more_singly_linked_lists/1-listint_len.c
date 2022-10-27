#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: link to the list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
