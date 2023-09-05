#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointere to str
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	dest = malloc(strlen(s1) + strlen(s1) + 2);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		dest[i] = s1[i];

	for (j = 0; j < strlen(s2); j++, i++)
		dest[i] = s2[j];

	dest[strlen(s1) + strlen(s2)] = '\0';
	return (dest);
	free(dest);
}
