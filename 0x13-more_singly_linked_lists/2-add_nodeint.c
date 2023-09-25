#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to header pointer
 * @n: integer data
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(struct listint_s));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head; 
	*head = new;
	return (*head);
}
