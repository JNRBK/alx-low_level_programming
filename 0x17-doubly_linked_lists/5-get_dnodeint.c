#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at certain index
 * @head: pointer to head
 * @index: unisgned int referring to node(index)
 * Return: b
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int b = 0;

	while (head != NULL && b < index)
	{
		head = head->next;
		b++;
	}
	return (head);
}
