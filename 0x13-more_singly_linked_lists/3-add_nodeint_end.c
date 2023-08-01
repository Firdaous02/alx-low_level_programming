#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!nv)
		return (NULL);

	nv->n = n;
	nv->next = NULL;

	if (*head == NULL)
		*head = nv;

	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = nv;
	}
	return (nv);
}
