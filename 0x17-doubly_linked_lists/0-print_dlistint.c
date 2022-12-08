#include "lists.h"
/**
 * print_dlistint - prints all elements ofa linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (0);
	temp = h;
	if (temp->next == NULL)
	{
		printf("%d\n", temp->n);
		n++;
		return (n);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
		printf("%d\n", temp->n);
		n++;
	}
	return (n);
}

