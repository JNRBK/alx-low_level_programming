#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: pointer to node
 * Return: new
*/
size_t listint_len(const listint_t *h)
{
	size_t new = 0;

	while (h != NULL)
	{

	h = h->next;
	new++;
	}
	return (new);
}
