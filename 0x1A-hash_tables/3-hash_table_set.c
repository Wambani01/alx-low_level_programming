#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function that inserts in a hash table
 * @ht: the hash table to insert a value
 * @key: key to generate index
 * @value: value to insert
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	hash_node_t *temp = NULL;
	unsigned long int i = 0;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);
	node->next = NULL;
	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] == NULL)
		ht->array[i] = node;
	else
	{
		temp = ht->array[i];

		while (temp)
		{
			if (strcmp(key, temp->key) == 0)
			{
				free(ht->array[i]->value);
				ht->array[i]->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		node->next = ht->array[i];
		ht->array[i] = node;

	}
	return (1);
}
