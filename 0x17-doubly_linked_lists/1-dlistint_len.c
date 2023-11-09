#include "lists.h"
/**
 * dlistint_len - print the elements length
 * @h: pointer to head
 * Return: length
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;

	}
	return (count);
}
