#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hashtable to check
 * @key: the key whose value to retrieve
 * Return: value on success, Null on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[i])
	{
		return (NULL);
	}
	temp = ht->array[i];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	free(temp);
	return (NULL);
}
