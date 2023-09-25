#include "lists.h"

/**
 * listint_len - counts the number of elements
 * @h: header point
 * Return: return number
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
