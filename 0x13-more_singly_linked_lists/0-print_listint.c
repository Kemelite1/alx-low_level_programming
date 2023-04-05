#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;


	while (h)
	{
		printf("%d\n", h->n);
		t++;
		h = h->next;
	}
	return (t);

}
