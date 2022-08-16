#include "lists.h"

/**
 * print_listint - print elements of a list
 * @h: -the list
 * Return:the no of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t plus = 0;

	while (h)
	{
		printf("%d \n", h->n);
		plus++;
		h = h->next;
	}
	return (plus);
}
