#include "lists.h"
/**
 * free_listint2 - frees the list
 * @head: double pointer
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *frees;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		frees = *head;
		*head = (*head)->next;
		free(frees);
	}
}
