#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *tempNode;

	while (head != NULL)
	{
		tempNode = head;
		head = head->next;
		free(tempNode->str);
		free(tempNode->len);
		free(tempNode);
	}
}

