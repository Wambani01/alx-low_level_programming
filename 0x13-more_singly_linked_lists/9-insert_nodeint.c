#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a particula index
 * @head : pointer to the list
 * @idx : position to insertt node
 * Return : new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *ptr;
	if (*head == NULL)
	{
		return (0);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->next = NULL;

	ptr = *head;

	while (head)
	{
		if (i == idx)
		{
			return (ptr);
		}
		ptr = ptr->next;
		i++;
	}
	return (new);

}
