#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the string
 * @b: constant byte
 * @n: number of bytes 
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	int i;

	for (i = 0; i < n; i++)
	{
		*p = b;
		*p++;
	}

	return (s);
}
