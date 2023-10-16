#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: character array of 0s and 1s
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			x = (x << 1) + (*b - '0');
			b++;
		}
		else
			return (0);
	}
	return (x);
}
