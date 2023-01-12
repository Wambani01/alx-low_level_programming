#include "hash_tables.h"

/**
 *  hash_table_print - prints a hash table
 *  @ht: the table being printed
 *  Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			if (j > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[i]->key, (char *)ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			j += 1;
		}
		i += 1;
	}
	printf("}\n");
}
