#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to header
 * Return: b
*/
size_t print_list(const list_t *h)
{
	unsigned int b = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%ld] %s\n", strlen(h->str), h->str);
		}
		h = h->next;
		b++;
	}
	return (b);
}
