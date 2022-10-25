#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add a node at the end of a list
 * @head: pointer to current list
 * @str: strig to the node to add
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;
	return (new);

}
