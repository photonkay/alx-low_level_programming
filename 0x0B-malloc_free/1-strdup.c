#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string passed into function
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	dup = malloc(strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
	free(dup);
}
