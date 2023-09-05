#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - splits strings
 * @str: string passed into function
 * Return: strings pointer
 */
char **strtow(char *str)
{
	int i;
	int nw = 0; /*nw - number of words*/
	int wi = 0; /*wi - word index */
	char **dest, *token;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			nw++;
	}

	dest = malloc((nw + 1) * sizeof(char *));

	if (dest == NULL)
		return (NULL);

	token = strtok(str, " ");

	while (token != NULL)
	{
		dest[wi] = strdup(token);
		if (dest[wi] == NULL)
		{
			for (i = 0; i < wi; i++)
			{
				free(dest[i]);
			}
			free(dest);
			return (NULL);
		}
		wi++;
		token = strtok(NULL, " ");
	}
	dest[nw] = '\0';
	return (dest);
}
