#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: string to be tested
 * Return: char
 */
char *string_toupper(char *s)
{
	char *c = s;

	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - ('a' - 'A');
		}
		*c++;
	}
	return (s);
}
