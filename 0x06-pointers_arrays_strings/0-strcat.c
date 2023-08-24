#include "main.h"

/**
 * _strcat - concatenates string
 * @dest: destination string
 * @src: string to append
 * Return: dest
 */
char *strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (0);
}
