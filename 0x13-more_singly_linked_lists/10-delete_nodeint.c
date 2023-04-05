#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer to first node
 * @index: index of node to be deleted
 * Return: 1 when successful and -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *currentNode = NULL;
	unsigned int t = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (t < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		t++;
	}
	currentNode = temp->next;
	temp->next = currentNode->next;
	free(currentNode);

	return (1);
}
