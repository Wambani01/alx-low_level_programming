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
	list_t *ptr = NULL;
	list_t *new = NULL;
	
	new = malloc(sizeof(list_t));
	
	if (new == NULL)
	{
		return (0);
	}
	if (str == NULL)
	{
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	
	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		ptr = *head;
		while (ptr != NULL)
		{
			ptr = ptr->next;
		}
		new->next = ptr;
	}

	return (new);

}
