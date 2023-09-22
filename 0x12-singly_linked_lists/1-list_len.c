#include "lists.h"
/**
 * list_len - returns the number of elements in list_t list
 * @h: pointer to header
 * Return: b
*/
size_t list_len(const list_t *h)
{
	unsigned int b = 0;

	while (h != NULL)
	{
		b++;
		h = h->next;
	}
	return (b);
}
