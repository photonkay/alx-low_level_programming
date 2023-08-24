#include "main.h"

/**
 * _strncpy - copies string into another
 * @dest: destination string
 * @src: string to append
 * @n: maximum number of bytes
 * Return: s (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *s = dest;

	while ((dest[i] = src[i]) != '\0')
		++i;

	if (n == 0)
	{
		*dest = '\0';
	}
	return (s);
}
