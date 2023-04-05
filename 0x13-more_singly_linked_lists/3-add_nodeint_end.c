#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the listint_t list
 * @n: data to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/** create a new node */
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	/** traverse list with a temp node to get the last node */
	while (temp->next)
		temp = temp->next;
	/** temp next should be pointed to newNode */
	temp->next = newNode;
	return (newNode);
}
