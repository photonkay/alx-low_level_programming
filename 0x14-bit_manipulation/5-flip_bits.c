#include "main.h"

/**
 * flip_bits - turns one into another
 * @n: first unsigned integer
 * @m: second unsigned integer
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _xor_ = n ^ m;
	unsigned int count = 0;

	while (_xor_ > 0)
	{
		if (_xor_ & 1)
			count++;
		_xor_ >>= 1;
	}
	return (count);
}
