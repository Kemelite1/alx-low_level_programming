#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to listint_t
 * @n: new data to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/**create a new node */
	listint_t *newNode;

	/**allocate memory */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	/**assign values to newNode */
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
