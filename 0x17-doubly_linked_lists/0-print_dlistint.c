#include "lists.h"
/**
 * print_dlistint - print list elements
 * @h: pointer to head
 * Return: number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int b = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		b++;

	}
	return (b);
}
