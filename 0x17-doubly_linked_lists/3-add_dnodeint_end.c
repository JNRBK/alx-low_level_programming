#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of the list
 * @head: double pointer to the head
 * @n: const int to data
 * Return: End node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *End;
	dlistint_t *pre = *head;

	End = malloc(sizeof(dlistint_t));

	if (End == NULL)
	{
		return (NULL);
	}

	End->n = n;
	End->next = NULL;
	End->prev = NULL;

	if (*head == NULL)
	{
		*head = End;
	}
	else
	{
		while (pre->next != NULL)
		{
			pre = pre->next;
		}
		pre->next = End;
		End->prev = pre;
	}

	return (End);
}
