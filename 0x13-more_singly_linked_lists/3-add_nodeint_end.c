#include "lists.h"
/**
 * add_nodeint_end- add node at the end of a list
 * @head: pointer to the list
 * @n: node being added
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	while (*head != NULL)
	{
		tmp = tmp->next;
	}
	
	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	tmp = new;

	return (new);
}
