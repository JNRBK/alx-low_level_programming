#include "lists.h"
/**
 * free_list - function to free
 * @head: pointer to head
 * Return: 0
*/
void free_list(list_t *head)
{
	list_t *nody;
	list_t *nod;

	nody = head;
	while (nody)
	{
		nod = nody->next;
		free(nody->str);
		free(nody);
		nody = nod;
	}
}
