#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node in a linked list
 * @head: first node in the linked list
 * @index: index of the node
 *
 * Return: pointer to the nth node, or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
