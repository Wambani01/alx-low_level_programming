#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the a list
 * @head: pointer to the new node
 * @str: pointer to string
 * Return: pointer to the new element in the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = NULL;

	h->str = strdup(str);
	h->n = strlen(str);
	h->next = head->next;

	head-> = h->next;

	return (head);
}
