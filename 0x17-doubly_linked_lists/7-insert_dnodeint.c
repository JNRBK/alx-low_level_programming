#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at specific index
 * @h: double pointing to head
 * @idx: element
 * @n: refers to data
 * Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int b = 0;


	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	curr = *h;
	for (b = 0; b < (idx - 1) && curr != NULL; b++)
		curr = curr->next;

	if (curr == NULL)
	{
		return (NULL);
	}
	new->next = curr->next;
	new->prev = curr;
	if (curr->next != NULL)
	{
		curr->next->prev = new;
	}
	curr->next = new;
	return (new);
}
