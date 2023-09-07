#include "hash_tables.h"
/**
* key_index - returns the index of a key
* @key: a string
* @size: array size
*
* Return: Always(0) success
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
