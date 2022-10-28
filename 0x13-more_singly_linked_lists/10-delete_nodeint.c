#include "lists.h"
/**
 * delete_nodeint_at_index - deletes index at a certain index
 * @head: pointer to the list
 * @index: index being dleted at
 * Return: -1 on failure and 1 0n sucess
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int count;

	if (head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	count = 0;

	while (count != index)
	{
		previous = current;
		current = current->next;

		if (current == NULL)
		{
			return (-1);
		}
		count++;
	}

	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
