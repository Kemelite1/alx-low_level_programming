#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index
 * @index: index of the node
 * @head: first node
 * Return: pointer to the specified node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *temp = head;

	while (temp && t < index)
	{
		temp = temp->next;
		t++;
	}
	return (temp ? temp : NULL);
}
