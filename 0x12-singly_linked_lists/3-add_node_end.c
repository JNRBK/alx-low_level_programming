#include "lists.h"
/**
 * add_node_end - add a new node at the end
 * @head: pointer to head
 * @str: const char
 * Return: nody
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nody;
	list_t *nod;

	nod = malloc(sizeof(list_t));

	if (nod == NULL)
	{
		return (NULL);
	}
	nody = nod;
	nody->str = strdup(str);
	nody->len = strlen(str);
	nody->next = NULL;
	if (*head == NULL)
	{
		*head = nody;
	}
	else
	{
		nod = *head;
		while (nod->next != NULL)
		{
			nod = nod->next;
		}
		nod->next = nody;
	}
	return (nody);
}
