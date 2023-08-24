#include "main.h"

/**
 * _strcat - concatenates string
 * @dest: destination string
 * @src: string to append
 * Return: s (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
