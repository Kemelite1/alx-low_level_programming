#include <stdio.h>
#include "lists.h"
/**
 * print_dlist - prints all the elements of a linked list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter;
	counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
