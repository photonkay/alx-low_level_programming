#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the string
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i); 
	}

	return (dest);
}
