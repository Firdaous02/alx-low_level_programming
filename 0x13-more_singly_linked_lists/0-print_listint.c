#include "lists.h"

/**
 * print_listint - The function that prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
