#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *nv = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!nv || !head)
		return (NULL);

	nv->n = n;
	nv->next = NULL;

	if (idx == 0)
	{
		nv->next = *head;
		*head = nv;
		return (nv);
	}

	while (tmp)
	{
		if (i == idx - 1)
		{
			nv->next = tmp->next;
			tmp->next = nv;
			return (nv);
		}
		i++;
		tmp = tmp->next;
	}
	free(nv);
	return (NULL);
}
