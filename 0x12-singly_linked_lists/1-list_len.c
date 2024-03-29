#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns number of elements
 * @h: pointer to list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
