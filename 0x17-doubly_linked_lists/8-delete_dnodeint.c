#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a specific node located at index
 * @head: double pointing to head
 * @index: unsigned int for index/element
 * Return: 1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *temp;
	unsigned int b;

	if (*head == NULL)
	{
		return (-1);
	}
	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(curr);
		return (1);
	}
	for (b = 0; b < index && curr != NULL; b++)
		curr = curr->next;

	if (curr == NULL)
	{
		return (-1);
	}

	if (curr->next == NULL)
	{
		curr->prev->next = NULL;
		free(curr);
	}
	else
	{
		temp = curr->prev;
		temp->next = curr->next;
		curr->next->prev = temp;
		free(curr);
	}

	return (1);
}
