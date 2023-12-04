#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: size of array in hash table
 * Return: new pointer to hash
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash = malloc(sizeof(hash_table_t));
	unsigned long int x;

	if (newhash == NULL)
	{
		return (NULL);
	}

	newhash->size = size;
	newhash->array = malloc(sizeof(hash_node_t *) * size);
	if (!newhash->array)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		newhash->array[x] = NULL;
	}

	return (newhash);
}
