#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: integer
 */
int get_endianness(void)
{
	unsigned long int x;
	unsigned char *ptr;

	x = 1;
	ptr = (unsigned char *) &x;

	if (*ptr == 1)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
