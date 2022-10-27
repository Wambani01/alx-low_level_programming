#include "lists.h"
/**
 * get_nodeint_at_index - gets index at nth node
 * @head: head pointer
 * @index: index of nth node
 * Return: pointer to the to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
