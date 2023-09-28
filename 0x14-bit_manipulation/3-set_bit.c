#include "main.h"

/**
 * set_bit - sets bit at a given index to 1
 * @n: the unsigned integer
 * @index: specified index
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
