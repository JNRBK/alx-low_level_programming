#include "lists.h"
/**
 * add_dnodeint - adds a new node at the begining of the list
 * @head: holds a double pointer to the head
 * @n: const int -> data
 * Return: New Node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Newnode;

	Newnode = malloc(sizeof(dlistint_t));

	if (Newnode == NULL)
	{
		return (NULL);
	}
	Newnode->n = n;
	Newnode->next = *head;
	Newnode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = Newnode;
	}
	*head = Newnode;

	return (Newnode);
}
