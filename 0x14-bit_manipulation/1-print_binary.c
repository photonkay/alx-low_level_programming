#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @n: the unsigned integer
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int bit_count = sizeof(n) * 8; /* 32 bit integer */
	int leading_zero = 1;
	unsigned long int mask;
	int i, bit;

	if (n == 0)
		_putchar('0');

	for (i = bit_count - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		bit = (n & mask) ? 1 : 0;

		if (bit == 1)
			leading_zero = 0;

		if (!leading_zero)
			_putchar(bit + '0');
	}
}
