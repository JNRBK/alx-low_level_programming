#include "lists.h"
/**
 * free_listint2 - frees the list
 * @head: double pointer
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *frees;

	while (*head != NULL)
	{
		frees = (*head)->next;
		free(*head);
		*head = frees;
	}
	*head = NULL;
}
