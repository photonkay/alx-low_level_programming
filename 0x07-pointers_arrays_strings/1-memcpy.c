#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @dest: pointer to the string
 * @src: constant byte
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
