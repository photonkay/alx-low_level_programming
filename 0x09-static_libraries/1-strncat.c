#include "main.h"

/**
 * _strncat - also concatenates string
 * @dest: destination string
 * @src: string to append
 * @n: maximum number of bytes
 * Return: s (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	if (n == 0)
	{
		*dest = '\0';
	}

	return (s);
}
