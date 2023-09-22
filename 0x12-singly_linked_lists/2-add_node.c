#include "lists.h"
/**
 * add_node - function that adds a new node
 * @head: pointer to head
 * @str: const chat
 * Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nod = malloc(sizeof(list_t));

	if (nod == NULL)
	{
		return (NULL);
	}
	nod->str = strdup(str);
	nod->len = strlen(str);
	nod->next = *head;
	*head = nod;
	return (nod);
}
