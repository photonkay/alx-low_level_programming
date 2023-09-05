#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string passed into function
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len += 1;

	dup = malloc(len + 1);

	for(i = 0; i < len; i++)
		dup[i] = str [i];

	dup[i] = '\0';	

	if (dup == NULL)
		return (NULL);

	return (dup);
	free(dup);
}
