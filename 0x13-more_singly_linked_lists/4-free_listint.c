#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list
*/

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
