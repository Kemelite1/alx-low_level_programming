#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that returns number of elements
 * @h: pointer to listint_t
 * Return: number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);

}
