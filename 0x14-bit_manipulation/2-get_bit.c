#include "main.h"

/** 
 * get_bit - gets bit at specified index
 * @n: the unsigned integer
 * @index: specified index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask = 1UL << index;
	bit = (n & mask) ? 1: 0;
	return (bit);
}
