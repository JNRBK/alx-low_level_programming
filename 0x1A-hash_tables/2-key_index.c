#include "hash_tables.h"
/**
 * key_index - function that gives an index to a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: the index where key\value should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
