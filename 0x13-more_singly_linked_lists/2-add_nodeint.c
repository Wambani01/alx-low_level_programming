#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of a list
 * @head - poinrt to the list
 * @n - node being added
 * Return: pointer the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t **new;

	if (*head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new-> = n;
	new->next = head;
	head = new;

	return (new);
}
