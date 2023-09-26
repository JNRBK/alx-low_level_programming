#include "lists.h"
/**
 * add_nodeint - add a new node at the begining
 * @head: holds a double pointer
 * @n: const int
 * Return: new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
