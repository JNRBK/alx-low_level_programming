#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node
 * @head: pointer
 * @index: unsigned int
 * Return: new node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *nod;

	if (head == NULL)
		return (NULL);

	nod = head;
	while (count < index)
	{
		if (nod == NULL)
			return (NULL);
		nod = nod->next;
		count++;
	}
	return (nod);
}
