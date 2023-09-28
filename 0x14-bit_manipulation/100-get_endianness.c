#include "main.h"

/**
 * get_endianness - turns one into another
 * Return: 1 for little endian
 *	0 for big endian
 */
int get_endianness(void)
{
	unsigned long int x = 1;
	unsigned char *ptr = (unsigned char *) & x;

	if (*ptr == 1)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
