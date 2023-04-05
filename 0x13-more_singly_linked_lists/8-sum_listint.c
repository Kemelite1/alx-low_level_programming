#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - calculates the sum of all the members of a linked list
 * @head: pointer to first node
 * Return: sum total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
