#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the a list
 * @head: pointer to the new node
 * @str: pointer to string
 * Return: pointer to the new element in the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h = NULL;

	h = malloc(sizeof(list_t));

	if (h == NULL)
	{
		return (0);
	}

	if (str == NULL)
	{
		h->str = NULL;
		h->len = 0;
		h->next = *head;
		*head = h;
	}
	else
	{
		h->str = strdup(str);
		h->len = strlen(str);
		h->next = *head;
		*head = h;
	}
	return (h);
}
