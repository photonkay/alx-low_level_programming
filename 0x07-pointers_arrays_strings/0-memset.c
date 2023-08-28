#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the string
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p = b;
		*p++;
	}

	return (s);
}
