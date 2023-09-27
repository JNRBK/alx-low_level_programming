#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: double pointer
 * @index: unsigned int
 * Return: del
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del = *head;
	listint_t *current = *head;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}
	while (x < index - 1)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
		x++;
	}
	if (current->next == NULL)
	{
		return (-1);
	}
	del = current->next;
	current->next = current->next->next;
	free(del);
	return(1);
}
