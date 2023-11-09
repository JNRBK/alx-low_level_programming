#include "lists.h"
/**
 * free_dlistint - free double links
 * @head: head pointer
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freez;

	while (head != NULL)
	{
		freez = head;
		head = head->next;
		free(freez);
	}
}
