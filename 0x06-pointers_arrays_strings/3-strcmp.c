#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: destination string
 * @s2: string to append
 * Return: 0 if strings are equal
 * difference in ascii is returned otherwise
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
