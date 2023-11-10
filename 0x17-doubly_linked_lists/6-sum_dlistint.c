#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in list
 * @head: node
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *dummy = head;

	while (dummy != NULL)
	{
		sum += dummy->n;
		dummy = dummy->next;
	}
	return (sum);
}
