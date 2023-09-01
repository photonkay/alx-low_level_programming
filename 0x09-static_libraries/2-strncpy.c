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
	char *s = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (s);
}
