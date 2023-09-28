#include "main.h"

/**
 * clear_bit - sets bit at a given index to 0
 * @n: the unsigned integer
 * @index: specified index
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
