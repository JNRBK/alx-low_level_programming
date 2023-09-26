#include "lists.h"
/**
 * free_listint - frees the list
 * @head: pointer to struct
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head != NULL)
	{
		frees = head->next;
		free(head);
		head = frees;
	}
}
