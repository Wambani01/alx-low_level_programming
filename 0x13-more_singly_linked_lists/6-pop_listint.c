#include "lists.h"
/**
 * pop_listint - deletes head node of a list
 * @head: pointer to the list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = (*head)->n;

	*head = temp->next;

	free(temp);
	return (n);
}
