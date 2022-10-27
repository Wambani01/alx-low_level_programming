#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of a list
 * @head: pointer to the list
 * @n: node being added
 * Return: pointer the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head == NULL)
	{
		return (0);
	}


	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->next = *head;
	*head = new;


	return (new);
}
