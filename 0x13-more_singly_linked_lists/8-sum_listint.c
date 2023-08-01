#include "lists.h"

/**
 * sum_listint - Function to calculate the sum of data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: The sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
