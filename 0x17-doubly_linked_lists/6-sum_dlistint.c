#include "lists.h"
/**
 * sum_dlistint - function to sum all data in double list
 * @head: points to head
 * Return: sum of data
*/
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
