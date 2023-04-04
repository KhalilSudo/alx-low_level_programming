#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*pop_listint -delete head and return n
*
*@head :pointer to head of linked list
*
*@n :integer
*Return: int n.
*/
int pop_listint(listint_t **head);
{
	listint_t *newNode, *temp;
	int n ;

	if (head == NULL)
	{
		return (NULL);
	}

	n = *head->n ;
	temp = *head->next;
	free(head);
	*head = temp;
	
	return (n);
}
