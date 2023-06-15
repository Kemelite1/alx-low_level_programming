#include <stdlib.h>
#include "lists.h"
/**
 * dlist_len - function that returns number of elements
 * @h: head pointer
 * Return: number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter;
	counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
