#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double pointer
 * Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *todelete;
	int x;

	if (*head == NULL || head == NULL)
		return (0);

	todelete = *head;
	x = todelete->n;
	 *head = (*head)->next;
	free(todelete);
	return (x);
}
