#include <stdlib.h>
#include "lists.h"

/**
*sum_listint -sum of list of node
*
*@head :head of linked lists
*
*Return: sum of of n.
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (h != NULL)
	{
		sum = sum + h->n;
		head = head->next;
	}
	return (sum);
}
