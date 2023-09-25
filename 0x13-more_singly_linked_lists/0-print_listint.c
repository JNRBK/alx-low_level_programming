#include "lists.h"
/**
 * print_listint - print elements of linked list
 * @h: pointer to node
 * Return: new
*/
size_t print_listint(const listint_t *h)
{
	size_t new = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	new++;
	}
	return (new);

}
