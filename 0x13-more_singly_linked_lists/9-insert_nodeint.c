#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer
 * @idx: index
 * @n: int
 * Return: pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nod = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int x = 0;

	if (nod == NULL)
	{
		return (NULL);
	}
	nod->n = n;

	if (idx == 0)
	{
		nod->next = *head;
		*head = nod;
		return (nod);
	}
	while (x < idx - 1)
	{
		if (current == NULL)
		{
			free(nod);
			return (NULL);
		}
		current = current->next;
		x++;
	}
	nod->next = current->next;
	current->next = nod;
	return (nod);
}
