#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string passed into function
 * Return: pointere to str
 */
char *_strdup(char *str)
{
	char *dup;

	dup = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
	free(dup);
}
