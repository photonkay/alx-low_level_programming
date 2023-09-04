#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string passed into function
 * Return: pointere to str
 */
char *_strdup(char *str)
{
	int len = 0;
	unsigned int i = 0;
	char *dup;

	while (*str != '\0')
		++len;

	dup = malloc(len + 1);

	if (dup == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);

	while (i < sizeof(dup))
	{
		*(dup + i) = *(str + i);
		i++;
	}
	return (dup);
	free(dup);
}
