#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *my_current, *my_next;

	if (head == NULL)
		return;

	my_current = *head;
	while (my_current != NULL)
	{
		my_next = my_current->next;
		free(my_current);
		my_current = my_next;
	}

	*head = NULL;
}

