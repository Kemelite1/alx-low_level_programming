#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to first node
 * Return: pointer to first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
