#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - delete head and return n
*
* @head: pointer to pointer to head of linked list
*
* Return: int n.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
