#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to go through
 * @c: character to find
 * Return: pointer to character
 * otherwise return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
