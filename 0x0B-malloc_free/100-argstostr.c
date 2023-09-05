#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates arguments passed into program
 * @ac: argument count
 * @av: argument vector
 * Return: string pointer
 */
char *argstostr(int ac, char **av)
{
	char *dest;
	int i, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* find length of array */
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			len += strlen(av[i]) + 1;
	}

	/* allocate memory */
	dest = malloc(len + 1);

	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';

	/* concatenate strings */
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcat(dest, av[i]);
			strcat(dest, "\n");
		}
	}
	return (dest);
}
