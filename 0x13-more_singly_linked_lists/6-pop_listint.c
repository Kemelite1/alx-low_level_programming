#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first member in the list
 * Return: data inside the elements deleted, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int t;

	if (!head || !*head)
		return (0);
	t = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (t);
}
