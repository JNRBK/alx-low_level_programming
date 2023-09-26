#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double pointer
 * Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *todelete;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	 data = (*head)->n;
	 todelete = (*head)->next;
	free(todelete);
	*head = todelete;

	return (data);
}
